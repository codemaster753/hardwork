#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

void delay(unsigned int ms);
void drawLine(int x1, int y1, int x2, int y2);

int main() {
    int x1, y1, x2, y2;

    printf("Enter starting point (x1 y1) & (x2,y2) : ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    drawLine(x1, y1, x2, y2);

    getch();  // Wait for a key press before closing the graphics window

    closegraph();
    return 0;
}

void drawLine(int x1, int y1, int x2, int y2) {
    int dx, dy, p, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    putpixel(x, y, 15); // Assuming color 15 for the line

    if (dx >= dy) {
        p = 2 * dy - dx;

        while (x < x2) {
            x++;

            if (p < 0)
                p = p + 2 * dy;
            else {
                p = p + 2 * dy - 2 * dx;
                y++;
            }

            putpixel(x, y, 15); // Assuming color 15 for the line
            delay(10); // Optional delay
        }
    } else {
        p = 2 * dx - dy;

        while (y < y2) {
            y++;

            if (p < 0)
                p = p + 2 * dx;
            else {
                p = p + 2 * dx - 2 * dy;
                x++;
            }

            putpixel(x, y, 15); // Assuming color 15 for the line
            delay(10); // Optional delay
        }
    }
}

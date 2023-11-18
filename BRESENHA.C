#include <stdio.h>
#include <graphics.h>

void delay(unsigned int ms);

void drawLine(int x1, int y1, int x2, int y2) {
    int gd = DETECT, gm;
    int dx, dy, p, x, y;
    initgraph(&gd, &gm, "C://TURBOC3//BGI");

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

    closegraph();
}

int main() {
    int x1, y1, x2, y2;

    printf("Enter starting point (x1 y1) & (x2,y2) : ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);



    drawLine(x1, y1, x2, y2);

    return 0;
}

void delay(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 1275; j++)
            ; // Burn some CPU cycles
}
#include <stdio.h>
#include <graphics.h>

void drawCircle(int x0, int y0, int radius) {
    int y = radius;
    int x = 0;
    int p = 1 - radius;

    while (x <= y) {
        putpixel(x0 + x, y0 + y, 15);
        delay(10);
        putpixel(x0 + y, y0 + x, 15);
        delay(10);
        putpixel(x0 - x, y0 + y, 15);
        delay(10);
        putpixel(x0 - y, y0 + x, 15);
        delay(10);
        putpixel(x0 - x, y0 - y, 15);
        delay(10);
        putpixel(x0 - y, y0 - x, 15);
        delay(10);
        putpixel(x0 + x, y0 - y, 15);
        delay(10);
        putpixel(x0 + y, y0 - x, 15);
        delay(10);

        if (p < 0) {
            x++;
            p += 2 * x + 1;
        } else {
            x++;
            y--;
            p += 2 * (x - y) + 1;
        }
    }
}

int main() {
    int gd = DETECT, gm, x, y, r;

    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    printf("Enter radius: ");
    scanf("%d", &r);

    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    drawCircle(x, y, r);

    getch();
    closegraph();

    return 0;
}
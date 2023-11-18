#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

void drawEllipse(int x_center, int y_center, int rx, int ry) {
    int x, y, rxSquare, rySquare, twoRxSquare, twoRySquare, p, xEnd, yEnd;
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    x = 0;
    y = ry;
    rxSquare = rx * rx;
    rySquare = ry * ry;
    twoRxSquare = 2 * rxSquare;
    twoRySquare = 2 * rySquare;

    // Region 1
    p = rySquare - rxSquare * ry + 0.25 * rxSquare;
    xEnd = 0;
    yEnd = twoRxSquare * y;

    while (xEnd <= yEnd) {
        putpixel(x + x_center, y + y_center, WHITE);
        putpixel(-x + x_center, y + y_center, WHITE);
        putpixel(x + x_center, -y + y_center, WHITE);
        putpixel(-x + x_center, -y + y_center, WHITE);

        x++;
        xEnd += twoRySquare;
        if (p < 0)
            p += rySquare + xEnd;
        else {
            y--;
            yEnd -= twoRxSquare;
            p += rySquare + xEnd - yEnd;
        }
    }

    // Region 2
    p = rySquare * (x + 0.5) * (x + 0.5) + rxSquare * (y - 1) * (y - 1) - rxSquare * rySquare;

    while (y > 0) {
        putpixel(x + x_center, y + y_center, WHITE);
        putpixel(-x + x_center, y + y_center, WHITE);
        putpixel(x + x_center, -y + y_center, WHITE);
        putpixel(-x + x_center, -y + y_center, WHITE);

        y--;
        yEnd -= twoRxSquare;
        if (p > 0)
            p += rxSquare - yEnd;
        else {
            x++;
            xEnd += twoRySquare;
            p += rxSquare + xEnd - yEnd;
        }
    }

    delay(5000);
    closegraph();
}

int main() {
    int x_center = 200, y_center = 200;
    int rx = 150, ry = 100;

    drawEllipse(x_center, y_center, rx, ry);
    return 0;
}

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include<dos.h>

void boundaryFill(int x, int y, int fillColor, int boundaryColor) {
    if (getpixel(x, y) != boundaryColor && getpixel(x, y) != fillColor) {
        putpixel(x, y, fillColor);
        boundaryFill(x + 1, y, fillColor, boundaryColor);
        boundaryFill(x - 1, y, fillColor, boundaryColor);
        boundaryFill(x, y + 1, fillColor, boundaryColor);
        boundaryFill(x, y - 1, fillColor, boundaryColor);
    }
}

int main() {
    int gd = DETECT, gm;
    int x = 100, y = 100;
    int fillColor = RED;
    int boundaryColor = WHITE;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(50, 50, 200, 150);

    boundaryFill(x, y, fillColor, boundaryColor);

    delay(5000);
    closegraph();
    return 0;
}

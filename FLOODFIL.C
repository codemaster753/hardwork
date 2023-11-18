#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>

void floodFill(int x, int y, int fillColor, int oldColor) {
    if (getpixel(x, y) == oldColor) {
        putpixel(x, y, fillColor);
        floodFill(x + 1, y, fillColor, oldColor);
        floodFill(x - 1, y, fillColor, oldColor);
        floodFill(x, y + 1, fillColor, oldColor);
        floodFill(x, y - 1, fillColor, oldColor);
    }
}

int main() {
    int gd = DETECT, gm;
    int x = 100, y = 100;
    int fillColor = RED;
    int oldColor;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(50, 50, 200, 150);

    oldColor = getpixel(x, y);

    floodFill(x, y, fillColor, oldColor);

    delay(5000);
    closegraph();
    return 0;
}

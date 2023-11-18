#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main() {
    int gd = DETECT, gm, i;
    float x, y, steps, dx, dy;
    float x1, x2, y1, y2;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    x1 = 100, y1 = 100, x2 = 400, y2 = 300;
    dx = (float)(x2 - x1);
    dy = (float)(y2 - y1);
    if (dx >= dy) {
        steps = dx;
    } else {
        steps = dy;
    }
    dx = dx / steps;
    dy = dy / steps;

    // Initialize x and y here
    x = x1;
    y = y1;

    for (i = 1; i <= steps; i++) {
        putpixel((int)x, (int)y, RED);  // Convert x and y to integers for putpixel

        x += dx;
        y += dy;
    }

    getch();  // Wait for a key press before closing the graphics window
    closegraph();
}

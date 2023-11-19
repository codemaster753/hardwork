#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void floodFill(int x, int y, int oldcolor, int fillcolor) {
    if (getpixel(x, y) != fillcolor && getpixel(x, y) == oldcolor) {
        delay(1);

        putpixel(x, y, fillcolor);

        floodFill(x + 1, y, oldcolor, fillcolor);
        floodFill(x - 1, y, oldcolor, fillcolor);
        floodFill(x, y + 1, oldcolor, fillcolor);
        floodFill(x, y - 1, oldcolor, fillcolor);
        floodFill(x + 1, y + 1, oldcolor, fillcolor);
        floodFill(x + 1, y - 1, oldcolor, fillcolor);
        floodFill(x - 1, y - 1, oldcolor, fillcolor);
        floodFill(x - 1, y + 1, oldcolor, fillcolor);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    setcolor(BLUE);
    setfillstyle(SOLID_FILL, RED);
    rectangle(40, 40, 100, 100);

    // Call the flood-fill function starting from a point inside the square
    floodFill(55, 55, getpixel(55, 55), RED);

    getch();
    closegraph();
    return 0;
}

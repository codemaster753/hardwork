#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
void drawCircle(int x0, int y0, int radius, int points) {
    float angle, x, y;

    for (int i = 0; i < points; i++) {
        angle = 2 * M_PI * i / points;
        x = x0 + radius * cos(angle);
        y = y0 + radius * sin(angle);

        putpixel((int)x, (int)y, 15);
    }
}

int main() {
    int gd = DETECT, gm, x, y, radius, points;

    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    printf("Enter radius: ");
    scanf("%d", &radius);

    printf("Enter number of points: ");
    scanf("%d", &points);

    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    drawCircle(x, y, radius, points);

    getch();  // Wait for a key press before closing the graphics window

    closegraph();
    return 0;
}

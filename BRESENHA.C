#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
void drawLine(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;

    dx = abs(x1 - x0);
    dy = abs(y1 - y0);
    p = 2 * dy - dx;
    x = x0;
    y = y0;

    while (x <= x1)  // Change this condition to ensure the loop stops after reaching x1
    {
        putpixel(x, y, 15); // Assuming color 15 for the line

        if (p >= 0)
        {
            y++;
            p = p - 2 * dx;  // Corrected the sign here
        }

        p = p + 2 * dy;
        x++;
    }
}

int main()
{
    int gd = DETECT, gm, x0, y0, x1, y1;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter coordinates of the first point: ");
    scanf("%d %d", &x0, &y0);

    printf("Enter coordinates of the second point: ");
    scanf("%d %d", &x1, &y1);

    drawLine(x0, y0, x1, y1);

    getch();
    closegraph();
    return 0;
}

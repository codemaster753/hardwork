#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
void drawLine(int x1, int y1,int x2, int y2)
{int dx, dy, p;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    p = 2 * dy - dx;

    while (x1 <= x2)  // Change this condition to ensure the loop stops after reaching x2
    {
	putpixel(x1, y1, 15);// Assuming color 15 for the line
        delay(10);

	if (p >= 0)
	{
	    p = p - 2 * dx;  // Corrected the sign here
	    y1++;
        }
	else {
	    p = p + 2 * dy;
	    x1++;
        }
    }
}
int main()
{
    int gd = DETECT, gm, x2, y2, x1, y1;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    x1=100,y1=300,x2=200,y2=400;
    drawLine(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}

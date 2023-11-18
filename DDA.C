#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd= DETECT, gm, i;
	float x,y,steps,dx,dy,x1,x2,y1,y2;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x1=100,y1=100,x2=400,y2=300;
	dx=(float)(x2-x1);
	dy=(float)(y2-y1);
	if(dx>=dy)
	{
	  steps=dx;
	}
	else
	{
	 steps=dy;
	}
	dx=dx/steps;
	dy=dy/steps;
	for(i=1;i<=steps;i++)
	{
	 putpixel(x,y,RED);
	 x+=dx;
	 y+=dy;
	}
}
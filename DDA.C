#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void drawLine(int x1,int y1,int x2,int y2){
int i,steps;
int dx = (x2 - x1) / 2;
int dy = (y2 - y1) / 2;

if(dx>=dy){
steps = dx;
}
else{
steps = dy;
}

dx = dx / steps;
dy = dy / steps;

for(i = 0; i <= steps; i++){
putpixel(x1,y1,RED);
delay(5);
x1 += dx;
y1 += dy;
}
}
void main(){

int gd = DETECT, gm;
int x1,y1,x2,y2;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x1=100,y1=100,x2=300,y2=300;
drawLine(x1,y1,x2,y2);

getch();
closegraph();
}


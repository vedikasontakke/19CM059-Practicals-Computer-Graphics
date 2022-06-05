/*
Implement following algorithms to draw a line.
  DDA algorithm,
  Bresenham’s algorithm..
*/

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main(int argc , char const *argv[])
{
float x,y,x1,y1,x2,y2,dx,dy,length;
    // gm is Graphics mode which is a computer display mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
int i,gd=DETECT,gm;

printf("Enter the value of x1 :\t");
scanf("%f",&x1);
printf("Enter the value of y1 :\t");
scanf("%f",&y1);
printf("Enter the value of x2 :\t");
scanf("%f",&x2);
printf("Enter the value of y2 :\t");
scanf("%f",&y2);

detectgraph(&gd,&gm);

    // initgraph initializes the graphics system by loading a graphics driver from disk
initgraph(&gd,&gm,(char*)"");

dx=abs(x2-x1);
dy=abs(y2-y1);

if(dx>=dy)
{
length=dx;
}
else
{
length=dy;
}
dx=(x2-x1)/length;
dy=(y2-y1)/length;

x=x1+0.5;
y=y1+0.5;

i=1;
while(i<=length)
{
  //delay(1000);
putpixel(x,y,15);
x=x+dx;
y=y+dy;
i=i+1;
delay(1000);
}
getch();
closegraph();
}

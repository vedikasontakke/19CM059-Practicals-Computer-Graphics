/*
Implement following algorithm’s to draw a circle (Any Two).
DDA algorithm.
*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main(int argc , char const *argv[])
{
float x1,y1,x2,y2,startx,starty,epsilon;
    // gm is Graphics mode which is a computer display mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
int gd=DETECT,gm,i,val,r;

printf("Enter the Radius of the Circle\n");
scanf("%d",&r);
detectgraph(&gd,&gm);

    // initgraph initializes the graphics system by loading a graphics driver from disk
initgraph(&gd,&gm,(char*)"");
x1=r*cos(0);
y1=r*sin(0);
startx=x1;
starty=y1;
i=0;
do
{
val=pow(2,i);
i++;
}
while(val<r);
epsilon=1/pow(2,i-1);
do
{
x2=x1+y1*epsilon;
y2=y1-epsilon*x2;
putpixel(250+x2,250+y2,4);
x1=x2;
y1=y2;
delay(1000);
}
while((y1-starty)<epsilon || (startx-x1)>epsilon);
getch();
closegraph();
}

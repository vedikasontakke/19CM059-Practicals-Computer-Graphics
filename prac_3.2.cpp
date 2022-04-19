/*
Implement following algorithm’s to draw a circle (Any Two).
Bresenham’s algorithm.   
*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main(int argc , char const *argv[])
{
float d;
int gd=DETECT,gm,x,y,r;
printf("Enter the radius of the Circle\n");
scanf("%d",&r);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,(char*)"");
x=0;
y=r;
d=3-2*r;
do
{
putpixel(250+x,250+y,15);
putpixel(250+y,250+x,15);
putpixel(250+y,250-x,15);
putpixel(250+x,250-y,15);
putpixel(250-x,250-y,15);
putpixel(250-y,250-x,15);
putpixel(250-y,250+x,15);
putpixel(250-x,250+y,15);
if(d<=0)
{
d=d+(4*x)+6;
}
else
{
d=d+(4*(x-y))+6;
y=y-1;
}
x=x+1;
delay(75);
}
while(x<y);
getch();
closegraph();
}

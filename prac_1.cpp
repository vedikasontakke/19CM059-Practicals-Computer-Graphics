// write a program to draw following graphics objects using built in "C" functions : pixel  lines  circle  rectangle  ellipse  ....

#include <graphics.h>
 
int main(int argc , char const *argv[])
{
    int gd = DETECT, gm;
  
    initgraph(&gd, &gm, (char*)"");
  
    putpixel(50 , 50 , RED);
  
    line(150, 150, 450, 150);

    circle(230 , 50 , 50);
   
    rectangle(300 , 40 , 400 , 100);
  
    ellipse(450 , 50 , 0 , 360 , 100 , 115);
  
    getch();
  
    closegraph();
}
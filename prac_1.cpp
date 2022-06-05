// write a program to draw following graphics objects using built in "C" functions : pixel  lines  circle  rectangle  ellipse  ....

#include <graphics.h>
 
int main(int argc , char const *argv[])
{
    int gd = DETECT, gm;
      // gm is Graphics mode which is a computer display mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file

        // initgraph initializes the graphics system by loading a graphics driver from disk

    initgraph(&gd, &gm, (char*)"");
  
    putpixel(170 , 170 , RED);
  
    line(150, 150, 450, 150);

    circle(230 , 50 , 50);
   
    rectangle(300 , 40 , 400 , 100);
  
    ellipse(450 , 50 , 0 , 360 , 100 , 115);
  
    getch();
  
    closegraph();
}
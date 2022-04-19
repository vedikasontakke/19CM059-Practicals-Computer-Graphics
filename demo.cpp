#include <graphics.h>
  
// driver code
int main(int argc , char const *argv[])
{
    // gm is Graphics mode which is a computer display
    // mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
    int gd = DETECT, gm;
  
    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, (char*)"");
  
    // line for x1, y1, x2, y2
    line(150, 150, 450, 150);
  
    // line for x1, y1, x2, y2
    line(150, 200, 450, 200);
  
    // line for x1, y1, x2, y2
    line(150, 250, 450, 250);
  
    putpixel(85, 35, GREEN);
    putpixel(30, 40, RED);
    putpixel(115, 50, YELLOW);
    putpixel(135, 50, CYAN);
    putpixel(45, 60, BLUE);
    putpixel(20, 100, WHITE);
    putpixel(200, 100, LIGHTBLUE);
    putpixel(150, 100, LIGHTGREEN);
    putpixel(200, 50, YELLOW);
    putpixel(120, 70, RED);

    circle(230 , 50 , 50);
   
    rectangle(300 , 40 , 400 , 100);
  
    ellipse(450 , 50 , 0 , 360 , 100 , 115);
  

    getch();
  
    // closegraph function closes the graphics
    // mode and deallocates all memory allocated
    // by graphics system .
    closegraph();
}
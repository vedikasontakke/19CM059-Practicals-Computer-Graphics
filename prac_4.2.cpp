////Write a program to fill polygon using following methods: Boundary fill

// C Implementation for Boundary Filling Algorithm
#include <graphics.h>
   
// Function for 4 connected Pixels
void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        delay(1000);

        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}
   
//driver code
int main(int argc , char const *argv[])
{
    // gm is Graphics mode which is a computer display mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
    int gd = DETECT, gm;
   
    // initgraph initializes the graphics system by loading a graphics driver from disk
    initgraph(&gd, &gm, (char*)"");
   
    int x = 250, y = 200, radius = 50;
   
    // circle function
    circle(x, y, radius);
   
    // Function calling
    boundaryFill4(x, y, 6, 15);
   
    //delay(10);
   
    getch();
 
    closegraph();
   
    return 0;
}

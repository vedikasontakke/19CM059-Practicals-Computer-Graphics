//// write a program to draw following graphics objects using built in "C" functions : pixel  lines  circle  rectangle  ellipse  ....

#include<graphics.h>  
#include<conio.h>  
int main()  
{  
    int gd=DETECT,gm;  
    initgraph (&gd,&gm,"(char*)");  
    setbkcolor(GREEN);  
    putpixel(170 , 170 , RED);

    printf("\t\t\t\n\nLINE");  
    line(50,40,190,40);  
    printf("\t\t\n\n\n\nRECTANGLE");  
    rectangle(125,115,215,165);  
    printf("\t\t\t\n\n\n\n\n\n\nARC");  
    arc(120,200,180,0,30);  
    printf("\t\n\n\n\nCIRCLE");  
    circle(120,270,30);  
    printf("\t\n\n\n\nECLIPSE");  
    ellipse(120,350,0,360,30,20);  
    getch();  
}  
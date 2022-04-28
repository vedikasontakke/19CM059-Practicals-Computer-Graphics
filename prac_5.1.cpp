/*
Write a program for two dimensional transformation:
i) Translating
ii) Scaling 
iii) Rotation
*/

// Translation

#include<graphics.h>
#include<stdio.h>
//#include <X11/Xlib.h>
int main(int argc , char const *argv[])
{
int gd=DETECT,gm;
// declaring two array
// Translation vector already initialized
int l[2][2],v[2]={10,15},i=0,j;
initgraph(&gd,&gm, (char*)"");
printf("Enter the initial and final coordinates of a line ");
// Getting input from user, having 2D array where 1st row represents initial point
// And Second row represents final coordinate
while(i<2)
{
printf("x%d and y%d = ",i,i);
j=0;
scanf("%d",&l[i][j]);
scanf("%d",&l[i][j+1]);
i++;
}
// Line before translation
line(l[0][0],l[0][1],l[1][0],l[1][1]);
setcolor(RED);
// Line after translation
line(l[0][0]+v[0],l[0][1]+v[1],l[1][0]+v[0],l[1][1]+v[1]); // Adding Translation vector in it to change the position
getch();
closegraph();
}
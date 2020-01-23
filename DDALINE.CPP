#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,x=400,y=400,i;float dx,dy,steps,xinc,yinc,x1,y1,x2,y2;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
printf("Enter x1 and y1\n");
scanf("%f%f",&x1,&y1);
printf("Enter x2 and y2\n");
scanf("%f%f",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(dx>dy)
{
steps=dx;
}
else
{steps=dy;}
xinc=dx/steps;
yinc=dy/steps;
putpixel(x1,y1,WHITE);
for(i=1;i<=steps;i++)
{
x1=x1+xinc;
y1=y1+yinc;
putpixel(x1,y1,WHITE);
delay(100);
}
outtextxy(x,y,"Abhishek Kumar");
getch();
closegraph();
}

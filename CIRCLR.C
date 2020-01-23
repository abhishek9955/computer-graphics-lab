#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,x=100,y=50,i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
outtextxy(x,y,"Abhishek Kumar");
for(i=0;i<8;i++)
{
x=x+50;y=50;
for(j=0;j<8;j++)
{
y=y+50;
circle(x,y,20);
}
}
getch();
cleardevice();
closegraph();
}
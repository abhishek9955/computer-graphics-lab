#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,x=100,y=50;
int stangle=0,endangle=360;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
outtextxy(x,y,"Abhishek Kumar");
bar(100,100,150,300);
circle(275,150,50);
rectangle(400,100,500,205);
ellipse(225,300,stangle,endangle,50,100);
getch();
cleardevice();
closegraph();
}
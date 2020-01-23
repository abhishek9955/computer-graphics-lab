#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,x=100,y=50,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
outtextxy(x,y,"Abhishek Kumar");
for(i=0;i<16;i++)
{
y=y+30;
setcolor(i);
outtextxy(x,y,"Welcome To Cuh");
}
getch();
cleardevice();
closegraph();
}
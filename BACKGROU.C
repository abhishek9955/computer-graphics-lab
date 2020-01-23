#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,x=100,y=50;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
setbkcolor(4);
setcolor(1);
outtextxy(x,y,"Abhishek Kumar");
y=y+30;
settextstyle(0,HORIZ_DIR,2);
outtextxy(x,y,"Welcome To Graphics Lab");
y=y+30;
outtextxy(x,y,"Press any key to continue");
getch();
cleardevice();
setbkcolor(14);
setcolor(2);
settextstyle(0,VERT_DIR,1);
outtextxy(x,y,"Abhishek Kumar");
x=x+30;
outtextxy(x,y,"Welcome to CUH");
x=x+30;
outtextxy(x,y,"Press any key to continue");
getch();
cleardevice();
closegraph();
}
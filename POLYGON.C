#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bfill(int a,int b,int boun,int fill)
{
	int temp=getpixel(a,b);
if(temp!=fill&&temp!=boun)
{  
putpixel(a,b,fill);  
bfill(a+1,b,boun,fill);
bfill(a,b+1,boun,fill);
bfill(a-1,b,boun,fill);
bfill(a,b-1,boun,fill);
}
}
void main()
{
int x=100,y=100,radius=30,bcolor,fcolor=6;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
printf("Abhishek Kumar");
circle(x,y,radius);
bcolor=getcolor();
bfill(x,y,bcolor,fcolor);
delay(1000);
getch();
closegraph();
}

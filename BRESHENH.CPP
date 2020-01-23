#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int sign(int a)
{
	if(a>0)
	return 1;
	else
	{if(a<0)
	return -1;
	else
	return 0;
	}
}
int mod(int a)
{
	if(a<0)
       return -a;
       else
       return a;
}
void main()
{
int gd=DETECT,gm,x=400,y=400,s,s1,s2,i,p,x1,y1,x2,y2,steps,temp;unsigned int dx,dy;

initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
printf("Enter x1 and y1\n");
scanf("%d%d",&x1,&y1);
printf("Enter x2 and y2\n");
scanf("%d%d",&x2,&y2);
dx=mod(x2-x1);
dy=mod(y2-y1);
if(dx<dy)
{
temp=dx;
dx=dy;
dy=temp;
s=1;
}
else
{
s=0;
}
s1=sign(x2-x1);
s2=sign(y2-y1);
p=2*dy-dx;
putpixel(x1,y1,WHITE);
for(i=1;i<=dx;i++)
{
	if(p>0)
	{
		x1=x1+s1;
		y1=y1+s2;
		p=p+2*(dy-dx);
	}
	else
	{
		if(s==1)
		y1=y1+s2;
		else
		x1=x1+s1;
		p=p+2*dy;
	}
	putpixel(x1,y1,WHITE);
delay(100);
}
outtextxy(x,y,"Abhishek Kumar");
getch();
closegraph();
}

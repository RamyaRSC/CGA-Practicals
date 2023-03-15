#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(void){
	int gd=DETECT,gm,xmax,ymax;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	xmax=getmaxx()/2;
	ymax=getmaxy()/2;
	line(xmax,0,xmax,getmaxy());
	line(0,ymax,getmaxx(),ymax);
	setcolor(4);
	circle(xmax,ymax,200);
	setcolor(3);
	circle(xmax,ymax,180);
	setcolor(1);
	circle(xmax,ymax,1160);
	setcolor(4);
	rectangle(xmax-200,ymax-200,xmax+200,ymax+200);
	setcolor(5);
	rectangle(xmax-120,ymax-180,xmax+120,ymax+180);
	setcolor(2);
	ellipse(xmax,ymax,0,360,50,100);
	setcolor(6);
	getch();
	return 0;
}
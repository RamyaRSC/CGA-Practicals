#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main(void){
	int gdriver=DETECT,gm;
	int xmax,ymax;
	initgraph(&gdriver,&gm,"c:\\turboc3\\bgi");
	xmax=getmaxx();
	ymax=getmaxy();
	line(xmax/2,0,xmax/2,ymax);
	line(0,ymax/2,xmax,ymax/2);
	getch();
	closegraph();
	return 0;
}
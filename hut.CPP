#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main(void){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setcolor(WHITE);
	rectangle(150,180,250,300); //
	rectangle(250,180,420,300);
	rectangle(180,250,220,300);
	line(200,100,150,180);
	line(200,100,370,100);
	line(200,100,250,180);
	line(370,100,420,180);
	getch();
	closegraph();
	return 0;
}

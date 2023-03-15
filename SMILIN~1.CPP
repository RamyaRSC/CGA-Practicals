#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main(){
	int gd=DETECT,gm, area, tmp1, tmp2, left=25, top=75;
	void * p;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	setcolor(YELLOW);
	circle(50,100,25);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(50,100,YELLOW);
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	fillellipse(44,85,2,6);
	fillellipse(56,85,2,6);
	rectangle(0,0,639,449);
	while(!kbhit()){
		tmp1=1+random(588);
		tmp2=1+random(380);
		getimage(left,top,left+50,top+50,p);
		putimage(left,top,p,XOR_PUT);
		putimage(left,tmp2,p,XOR_PUT);
		delay(200);
		left=tmp1;
		top=tmp2;
	}
	getch();
	closegraph();
}


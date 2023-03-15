#include<graphics.h>		//for initgraph(), closegraph()
#include<stdio.h>
#include<conio.h>   		//for getch()
int main(void){
	int gdriver=DETECT,gm;
	int xmax,ymax;
	initgraph(&gdriver,&gm,"c:\\turboc3\\bgi");		//initialize the graphics
	setcolor(getmaxcolor());
	xmax=getmaxx();				//maximum horizontal coordinate of the current graphics mode
	ymax=getmaxy();				//maximum y-coordinate of the current graphics mode
	line(xmax/2,0,xmax/2,ymax);	
	line(0,ymax/2,xmax,ymax/2);
	circle(170,125,100);			//x,y coordinates and radius
	outtextxy(170,125,"circle");		//x,y coordiantes and text
	rectangle(58,251,304,392);		//left, top, right, bottom
	outtextxy(160,300,"rectangle");		//x,y coordiantes and text
	arc(500,150,45,125,100);		//x,y-center coordinatead start_angle,end_angle,radius
	outtextxy(500,150,"arc");		
	ellipse(500,300,0,360,75,25);		//x,y,start_angle, end_angle, xradius, yradius
	outtextxy(500,300,"ellipse");
	getch();		//pause the program
	closegraph();		//close graphics mode and free up memory that was allocated by initgraph() function
	return 0;
}

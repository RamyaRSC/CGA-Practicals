#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void floodfill(int,int,int,int);
void floodfill(int x,int y,int newcolor,int defaultcolor){
	if(getpixel(x,y)==defaultcolor){
		delay(5);
		putpixel(x,y,newcolor);
		floodfill(x+1,y,newcolor,defaultcolor);
		floodfill(x,y+1,newcolor,defaultcolor);
		floodfill(x-1,y,newcolor,defaultcolor);
		floodfill(x,y+1,newcolor,defaultcolor);
		floodfill(x,y-1,newcolor,defaultcolor);
	}
}
int main(){
	int gm,gd=DETECT;
	int x,y,radius;
	printf("Enter the x and y center of a circle");
	scanf("%d%d",&x,&y);
	printf("Enter the radius of a circle");	
	scanf("%d",&radius);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	circle(x,y,radius);
	floodfill(x,y,10,0);
	delay(10);
	getch();
	return 0;
}
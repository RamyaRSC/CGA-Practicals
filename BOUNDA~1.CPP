#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundaryfill(int,int,int,int);
void boundaryfill(int x,int y,int f_color,int b_color){
	if(getpixel(x,y)!=b_color&&getpixel(x,y)!=f_color){
		delay(5);
		putpixel(x,y,f_color);
		boundaryfill(x+1,y,f_color,b_color);
		boundaryfill(x,y+1,f_color,b_color);
		boundaryfill(x-1,y,f_color,b_color);
		boundaryfill(x,y+1,f_color,b_color);
		boundaryfill(x,y-1,f_color,b_color);
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
	boundaryfill(x,y,4,15);
	delay(10);
	closegraph();
	return 0;
}
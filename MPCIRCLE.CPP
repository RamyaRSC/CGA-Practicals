#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int x,y,x_mid,y_mid, radius, dp, gm, gd=DETECT;
	clrscr();
	initgraph(&gd, &gm,"c:\\Turboc3\\bgi");
	printf("mid point circle algo");
	printf("\n enter the coordinate: ");
	scanf("%d%d",&x_mid, &y_mid);
	printf("\n enter the radius: ");
	scanf("%d",&radius);
	x=0;
	y=radius;
	dp=1-radius;
	do{
	putpixel(x_mid+x,y_mid+y,YELLOW);
	putpixel(x_mid+y,y_mid+x,YELLOW);
	putpixel(x_mid-y,y_mid+x,YELLOW);
	putpixel(x_mid-x,y_mid+y,YELLOW);
	putpixel(x_mid-x,y_mid-y,YELLOW);
	putpixel(x_mid-y,y_mid-x,YELLOW);
	putpixel(x_mid+y,y_mid-x,YELLOW);
	putpixel(x_mid+x,y_mid-y,YELLOW);
	if(dp<0){
		dp=dp+(2*x)+1;
	}
	else{
		y=y-1;
		dp=dp+(2*x)-(2*y)+1;
	}
	x=x+1;
	}
	while(y>x);
	getch();
}
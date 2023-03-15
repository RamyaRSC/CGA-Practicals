#include<stdio.h>
#include<conio.h>
#include<graphics.h>
//include<cmath>
//void DDA(int,int,int,int);
int main() {
	int gd=DETECT, gm,x1,x2,y1,y2,dx,dy,steps,x,y;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	printf("enter the value of xa & xb: ");
	scanf("%d%d",&x1,&x2);
	printf("\nenter the value of ya & yb: ");
	scanf("%d%d",&y1,&y2);
	//DDA(x1,x2,y1,y2);
	dx=x2-x1;
	dy=y2-y1;
	if(dx>=dy)
		steps=dx;
	else
		steps=dy;
	dx=dx/steps;
	dy=dy/steps;
	x=x1;
	y=y1;
	int i=1;
	while(i<=steps){
		putpixel((x),(y),5);
		x=x+dx;
		y=y+dy;
		i=i+1;
	}
	getch();
	return 0;

}
/*
void DDA(int xa,int xb,int ya,int yb){
	int k,dx,dy,steps;
	float x,y,xinc,yinc;
	dx=xb-xa;
	dy=yb-ya;
	if(dx>=dy)
		steps=dx;
	else
		steps=dy;
	xinc=dx/steps;
	yinc=dy/steps;
	x=xa;
	y=ya;
	//putpixel((x),(y),1);
	for(k=1,k<=steps,ck++){
		x=x+xinc;
		y=y+yinc;
		putpixel((x),(y),1.5);

	}
	getch();
	//return 0;
}
//getch();
// 0;

*/
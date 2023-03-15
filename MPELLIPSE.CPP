#include<graphics.h>
#include<stdio.h>
void main(){
	long x,y,x_center,y_center;
	long a_sqr,b_sqr,fx,fy,d,a,b,tmp1,tmp2;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	printf("***MID POINT ELLIPSE ALGORITHM");
	printf("\n\nEnter co-ordinate x and y: ");
	scanf("%d%d",x_center,y_center);
	printf("\n now enter the values of x_radius & y_radius: ");
	scanf("%d%d",&d,&b);
	x=0;
	y=b;
	a_sqr=a*a;
	b_sqr=b*b;
	fx=2*b_sqr*x;
	fy=2*a_sqr*y;
	d=b_sqr-(a_sqr*b)+(a_sqr*0,25);
	do{
		putpixel(x_center+x,y_center+y,1);
		putpixel(x_center-x,y_center-y,1);
		putpixel(x_center+x,y_center-y,1);
		putpixel(x_center-x,y_center+y,1);
		if(d<0){
			d=d+fx+b_sqr;
		}
		else{
			y=y-1;
			d=d+fx+(-fy)+b_sqr;
			fx=fy-(2*a_sqr);
		}
		x=x+1;
		fx=fx+(2*b_sqr);
		delay(10);
	}
	while(fx<fy);
	tmp1=(x+0.5)*(x+0.5);
	tmp2=(y-1)*(y-1);
	d=b_sqr*temp1+a_sqr*tmp2_(a_sqr*b_sqr);
	do{
		putpixel(x_center+x,y_center+y,1);
		putpixel(x_center-x,y_center-y,1);
		putpixel(x_center+x,y_center-y,1);
		putpixel(x_center-x,y_center+y,1);
		if(d>=0){
			d=d-fy+a_sqr;
		}
		else{
			x=x+1;
			d=d+fx-fy+a_sqr;
			fx=fx+(2*b_sqr);
		}
		y=y-1;
		fy=fy-(2*a_sqr);
	}
	while(y>0);
	getch();
	closegraph();
}

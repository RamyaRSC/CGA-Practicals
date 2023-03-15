#include<stdio.h>
#include<conio.h> 		//for getch()
#include<graphics.h>
#include<math.h>
int gd=DETECT, gm;
int n,x[100],y[100],i,xp,yp,degree;
float radian;
void rotaion();
void degToRad();
void draw(){
	for(i=0;i<n-1;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
	}
	line(x[0],y[0],x[n-1],y[n-1]);
}
void rotation(){
	float t,v;
	for(i=0;i<n;i++){
		t=x[i]-xp;
		v=y[i]-yp;
		x[i]=xp+floor(t*cos(radian)-v*sin(radian));
		y[i]=yp+floor(v*cos(radian)-t*sin(radian));
	}
}
void degToRad(){
	radian=(float)degree*3.14f/180;
}
void main(){
	printf("Enter number of sides");
	scanf("%d%",&n);
	printf("Enter co-ordinates:x,y for each point");
	for(i=0;i<n;i++)
	scanf("%d%d",&x[i],&y[i]);
	printf("\n enter the 3 degree rotational  " );
	scanf("%d%d",&degree);
	degToRad();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cleardevice();
	setcolor(RED);
	draw();
	rotation();
	setcolor(BLUE);
	draw();
	getch();
}
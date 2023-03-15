#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int gd=DETECT, gm;
int n,x[100],y[100],i;
float sx,sy;
void draw(){
	for(i=0;i<n-1;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
	}
	line(x[0],y[0],x[n-1],y[n-1]);
}
void scale(){
	for(i=0;i<n;i++){
		x[i]=x[0]+(int)((float)(x[i]-x[0]*sx));
		y[i]=y[0]+(int)((float)(y[i]-y[0]*sy));
	}
}
void main(){
	printf("Enter number of sides");
	scanf("%d%",&n);
	printf("ENter co-ordinate:x,y for each point");
	for(i=0;i<n;i++)
	scanf("%d%d",&x[i],&y[i]);
	printf("Enter scale factor: (tx,ty) " );
	scanf("%f%f",&sx,&sy);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setcolor(RED);
	draw();
	getch();
	scale();
	setcolor(BLUE);
	draw();
	getch();
}

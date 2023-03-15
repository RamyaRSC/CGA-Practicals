#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int gd=DETECT, gm;
int n,x[100],y[100],i;
float tx,ty;
void draw(){
	for(i=0;i<n-1;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
	}
	line(x[0],y[0],x[n-1],y[n-1]);
}
void translate(){
	for(i=0;i<n;i++){
		x[i]=x[i]+tx;
		y[i]=y[i]+ty;
	}
}
void main(){
	printf("Enter number of sides");
	scanf("%d%",&n);
	printf("ENter co-ordinate:x,y for each point");
	for(i=0;i<n;i++)
	scanf("%d%d",&x[i],&y[i]);
	printf("Enter scale factor: (tx,ty) " );
	scanf("%f%f",&tx,&ty);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setcolor(RED);
	draw();
	getch();
	translate();
	setcolor(BLUE);
	draw();
	getch();
}
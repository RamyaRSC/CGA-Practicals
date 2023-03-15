#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
void main(){
    int gd=DETECT,gm;
    int x1, x2, y1, y2, dx, dy,i, e;
    float x,y;
    clrscr();
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    printf("enter the starting points x1: ");
    scanf("%d",&x1);
    printf("enter the starting point y1: ");
    scanf("%d",&y1);
    printf("\nenter the ending points x2 & y2: ");
    scanf("%d%d",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    x=x1;
    y=y1;
    e=2*dy-dx;
    i=1;
    cleardevice();
    a:putpixel(ceil(x),ceil(y),WHITE);
    while(e>=0){
	y=y++;
	e=e-2*dx;
    }
    x++;
    e=e+2*dy;
    i++;
    if(x<=x2)
	goto a;
    getch();

}
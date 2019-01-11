#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main(){
int gd=DETECT,gm;
int i=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=0;i<=100;i+=1){
setcolor(i/10);
circle(320,240,50+i);
delay(10);
}
getch();
}
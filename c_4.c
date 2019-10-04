#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int x,y,r,x1,y1;
	long d;
	printf("Enter the coordinates of the center and radius respectively of the circle::\n");
	scanf("%d%d%d",x,y,r);
	
	printf("Enter the coordiantes of the point you want to check::\n");
	scanf("%d%d",x1,y1);
	
	d=sqrt(abs((x1-x)^2+(y1-y)^2));
	
	if(d<r){
		printf("\x0A Point lies inside the circle.");
	}
	else if(d>r){
		printf("\x0A Point lies outside the circle.");
	}
}

#include<stdio.h>
main(){
	int x,y,z;
	printf("Enter x :");
	scanf("%d",&x);
	
	printf("Enter y :");
	scanf("%d",&y);
	
	z=(x*x*x)-(3*x*x*y)+(3*x*y*y)-(y*y*y);
	
	printf("%d",z);
	
	
	
}

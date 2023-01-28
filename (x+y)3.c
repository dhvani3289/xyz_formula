#include<stdio.h>
main(){
	int x,y,z;
	printf("Enter x :");
	scanf("%d",&x);
	
	printf("Enter y :");
	scanf("%d",&y);
	
	z=(x*x*x)+(y*y*y)+(3*x*y)*(x+y);
	
	printf("%d",z);
	
	
}

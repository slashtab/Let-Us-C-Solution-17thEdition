#include <stdio.h>
#include <math.h>
int main() {
	//code
	int cx,cy,r,x,y;
	printf("Enter the int value center=cx,cy radius=r point=x,y");
	scanf("%d%d%d%d%d",&cx,&cy,&r,&x,&y);
	if (sqrt(pow(cx-x,2)+pow(cy-y,2))<r)
	    printf("\nThe point lies inside the circle");
	else if (sqrt(pow(cx-x,2)+pow(cy-y,2))==r)
	    printf("\nThe point lies on circle.");
	else if (sqrt(pow(cx-x,2)+pow(cy-y,2))>r)
	    printf("\nthe point lies outside of the circle.");
	return 0;
}
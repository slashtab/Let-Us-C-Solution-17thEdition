#include <stdio.h>
#include <math.h>
int main() {
	//code
	int A,B,C;
	printf("Enter the the Three angles of the triangle:");
	scanf("%d%d%d",&A,&B,&C);
	if (A+B+C==180){
	    printf("\nThe angles are valid for atriangle");
	}
	else
	    printf("Angles given are Not valid for a triangle");
	
	return 0;
}
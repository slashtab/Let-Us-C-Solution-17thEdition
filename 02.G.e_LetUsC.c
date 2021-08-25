#include <stdio.h>
#include <math.h>

int main() {
	//code
	int deg;
	printf("Please Enter the data in degree:");
	scanf("%d",&deg);
	float pi=3.143;
	float rad=deg*pi/180;
	printf("\n%f %f %f",sin(rad),cos(rad),tan(rad));
	return 0;
}
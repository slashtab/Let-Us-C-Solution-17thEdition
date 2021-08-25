#include <stdio.h>
#include <math.h>
int main() {
	//code
	int degree;
	printf("input the angle in degree:\n");
	scanf("%d",&degree); float rad=degree*3.143/180;
	if (pow(sin(rad),2)+pow(cos(rad),2)==1){
	    printf("The sum of sin and cosine of given angle is 1.");
	}
	else
	    printf("The sum of sin and cosine of given angle is not 01.");
	return 0;
}
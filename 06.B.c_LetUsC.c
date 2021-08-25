#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	float p,r,n,q;
	for (int i=0; i<=10; i++){
	    scanf("%f%f%f%f",&p,&r,&n,&q);
	    float a=p*(pow(1+r/q,n*q));
	    printf("The a value is %.2f.\n",a);
	}
	return 0;
}


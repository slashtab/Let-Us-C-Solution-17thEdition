#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	float x;
	scanf("%f",&x);
	float bone=(x-1)/x;
	float sum=bone;
	for(int i=2; i<=10; i++){
	    sum=sum+((0.5)*pow(bone,i));
	    
	}
	printf("%f",sum);
	return 0;
}


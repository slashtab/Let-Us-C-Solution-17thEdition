#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j; float sum=0.0;
	for(i=1; i<8; i++){
	    float fact=1;
	    for(j=1; j<=i; j++){
	        fact*=j;
	    }
	    sum+=i/fact;
	}
	printf("%f",sum);
	return 0;
}


#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i;
	printf("The prime numbers are\n%d\t",1);
	for (n=1; n<=300; n++){
	    i=2;
	    for(;i<n;i++){
	        if (n%i==0){
	            break;
	        }
	    }
	    if (i==n){
	        printf("%d\t",n);
	    }
	}
	return 0;
}


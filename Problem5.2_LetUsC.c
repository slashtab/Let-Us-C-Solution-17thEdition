#include <stdio.h>

int main(void) {
	// your code goes here
	int n; scanf("%d",&n);
	int factorial=1;
	while (n>=1){
	    factorial*=n;
	    n--;
	}
	printf("The factorial is %d",factorial);
	return 0;
}


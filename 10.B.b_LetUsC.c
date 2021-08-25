#include <stdio.h>
int nsum(int);

int main(void) {
	// your code goes here
	int m=nsum(25);
	printf("%d",m);
	return 0;
}

int nsum(int n){
    int sum=0;
    if(n>=1){
      sum=n+nsum(n-1);  
    }
    return sum;
}
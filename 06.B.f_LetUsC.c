#include <stdio.h>

int main(void) {
	// your code goes here
	float popltn=100000;
	
	for (int i=1; i<=10; i++){
	    popltn=popltn*(1-0.01);
	    
	    printf("At the start of %dth year, population is %f,\n",11-i,popltn);
	}
	return 0;
}


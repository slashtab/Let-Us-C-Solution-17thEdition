#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,k;
	for (i=1; i<=30; i++){
	    for (j=1; j<=30; j++){
	        for (k=1; k<=30; k++){
	            if(i*i+j*j==k*k){
	                printf("(%d,%d,%d)\t",i,j,k);
	                break;
	            }
	        }
	    }
	}
	return 0;
}


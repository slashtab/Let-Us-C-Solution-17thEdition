#include <stdio.h>

int main(void) {
	// your code goes here
	for (int i=3; i>=1; i--){
	    for (int j=3; j>=1; j--){
	        for (int k=3; k>=1; k--){
	            printf("%d%d%d\t",i,j,k);
	        }
	    }
	}
	return 0;
}


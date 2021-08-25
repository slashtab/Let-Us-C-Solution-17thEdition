#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j; int m=1;
	for (i=1; i<=4; i++){
	    for (j=1; j<=i; j++){
	        if (j==1){
	            printf("%*d ",5-i,m);
	            m+=1;
	        }
	        else{
	            printf("%d ",m);
	            m+=1;
	        }
	    }
	    printf("\n");
	}
	return 0;
}


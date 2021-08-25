#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int i=1;
	while (i<=500){
	    int uq=i/10, ur=i%10, tq=uq/10, tr=uq%10, hq=tq/10, hr=tq%10;
	    if (i==pow(ur,3)+pow(tr,3)+pow(hr,3)){
	        printf("%d ",i);
	    }
	    i++;
	}
	printf("\nThese are the Armstrong number.");
	return 0;
}


#include <stdio.h>

int main(void) {
	// your code goes here
	int x,power; scanf("%d%d",&x,&power);
	int val=1;
	while (power>0){
	    val*=x;
	    power--;
	}
	printf("The power of the number is %d",val);
	return 0;
}


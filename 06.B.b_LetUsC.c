#include <stdio.h>

int main(void) {
	// your code goes here
	int y; float i,x;
	printf("i   y   x\n");
	for( y=1; y<=6; y++){
	    for(x=5.5; x<=12.5; x+=0.5){
	         i=2+(y+0.5*x);
	        printf("%f   %d   %f\n",i,y,x);
	    }
	}
	return 0;
}


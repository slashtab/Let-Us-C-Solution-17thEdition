#include <stdio.h>

float power(float,int);

int main(void) {
	// your code goes here
	int y; float x,res;
	printf("enter the number x and power y:\n");
	scanf("%f%d",&x,&y);
	res=power(x,y);
	printf("%.2f",res);
	return 0;
}
float power(float a,int b){
    float m=1;
    for(int i=1; i<=b; i++){
        m=m*a;
    }
    return m;
}


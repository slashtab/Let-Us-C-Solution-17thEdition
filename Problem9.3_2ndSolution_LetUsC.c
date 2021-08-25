#include <stdio.h>
#include <math.h>
float term(float,int);
float fact(int);

int main(void) {
	// your code goes here
	int  n=0; float x,sum=0,oldsum;
	scanf("%f",&x);
	while(1){
	    
	    oldsum=sum;
	    float newsum=term(x,n);
	    sum=sum+newsum;
	    if (fabs(sum+((pow(x,2*n+3))/fact(2*n+3))-oldsum)<0.00001)
	        break;
	   n+=2;
	}
	printf("%f",sum);
	return 0;
}

float term(float v, int n){
    float m=((pow(v,2*n+1))/fact(2*n+1))-((pow(v,2*n+3))/fact(2*n+3));
    return m;
}

float fact(int deno){
    float f;
    if(deno==1){
        return 1;
    }
    else{
        f=deno*fact(deno-1);
    }
    return f;
}
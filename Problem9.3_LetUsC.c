#include <stdio.h>
#include <math.h>

float term(float,int);
float fact(int);

int main() {
	// your code goes here
	int n=1;
	float x,sum=0.0,oldsum,newsum;
	scanf("%f",&x);
	while(1){
	    oldsum=sum;
	    float newsum=term(x,n);
	    (n%2==0)? (sum=sum-newsum):(sum=sum+newsum);
	    if(fabs(sum-oldsum)<0.00001){
	        //printf("%f",sum);
	        break;
	    }
	    n++;
	   //printf("%f %f",sum,oldsum); 
	}
	printf("\n%f",sum);
	return 0;
}

float term(float v,int n){
    float m=pow(v,2*n-1)/fact(2*n-1);
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
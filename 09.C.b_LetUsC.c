#include <stdio.h>
#include <math.h>

float area(int ,int ,int );
int main(void) {
	// your code goes here
	int s1,s2,s3;
	scanf("%d%d%d",&s1,&s2,&s3);
	float ans=area(s1,s2,s3);
	printf("The area of triangle is %.3f",ans);
	return 0;
}

float area(int a,int b,int c){
    float S=(a+b+c)/2.0;
    return sqrt(S*(S-a)*(S-b)*(S-c));
    
}
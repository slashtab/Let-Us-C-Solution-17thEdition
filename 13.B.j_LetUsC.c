#include <stdio.h>
#include <math.h>
float distance(int*,int*,int);
int main(){
	int i,x[10], y[10];
	printf("input x and y for 10 times rescpectively:\n");
	for(i=0; i<10; i++){
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
	}
	float dist=distance(&x[0],&y[0],10);
	printf("%f",dist);
	return 0;
}

float distance(int*j,int*k,int n){
	int i; float fdist=0.0;
	for(i=0; i<n-1; i++){
		fdist+=sqrt((pow(*j-*(j+1),2))+(pow(*k-*(k+1),2)));
	}
	return fdist;
}

#include <stdio.h>
#include <math.h>

float mult2sum(float*,float*,int);
float sumofarray(float*,int);
int main(){
	int i;
	float x[11]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
	float y[11]={102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
	float xsum=sumofarray(&x[0],11); float ysum=sumofarray(&y[0],11);
	float numerator=mult2sum(&x[0],&y[0],11)-(xsum*ysum);
	float denominator=sqrt(((11*mult2sum(&x[0],&x[0],11))-pow(xsum,2))*((11*mult2sum(&y[0],&y[0],11))-pow(ysum,2)));
	float r=numerator/denominator;
	printf("The correlation coeffiecient of given data is %f.\n",r);
	printf("%f ",numerator);
	return 0;
}

float mult2sum(float*j,float*k,int n){
	float fmult2sum=0.0; int i;
	for(i=0; i<n; i++){
		fmult2sum+=(*j)*(*k);
		j++; k++;
	}
	return fmult2sum;
}

float sumofarray(float*j,int n){
	float fsumofarray=0.0; int i;
	for(i=0; i<n; i++){
		fsumofarray+=*j;
		j++;
	}
	return fsumofarray;
}

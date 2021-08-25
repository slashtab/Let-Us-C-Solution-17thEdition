#include <stdio.h>
#include <math.h>
float mean(int*,int);
float stdevn(int*,int,int);
int main(){
	int n=15;
	int arr[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
	float ans1=mean(&arr[0],n);
	float ans2=stdevn(&arr[0],ans1,n);
	printf("The mean is %f, and std devn is %f.",ans1,ans2);
	return 0;
}

float mean(int*j,int n){
	int i,sum=0;
	for(i=0; i<n; i++){
		sum+=*j;
		j++;
	}
	float fmean=sum/n;
	return fmean;
}

float stdevn(int*j,int fmean,int n){
	int i,sum=0;
	for(i=0; i<n; i++){
		sum=sum+pow((*j-fmean),2);
		j++;
	}
	float fstdevn=sqrt(sum/n);
	return fstdevn;
}

#include <stdio.h>
int mult2mat(int a1[][3],int a2[][3]);
int main(){
	int arr1[3][3]={1,2,3,4,5,6,7,8,9}; int arr2[3][3]={1,2,3,4,5,6,7,8,9};
	mult2mat(arr1,arr2);
	return 0;
}

int mult2mat(int a1[][3],int a2[][3]){
	int i,j=0,k; int arrmult[3][3]; 
	for(i=0;i<3;i++){
		int sum1=0,sum2=0,sum3=0;
		for(j=0; j<3; j++){
			sum1+=a1[i][j]*a2[j][0];
			sum2+=a1[i][j]*a2[j][1];
			sum3+=a1[i][j]*a2[j][2];
		}
		printf("%d  %d  %d",sum1,sum2,sum3);
		printf("\n");
	}
	return;
}

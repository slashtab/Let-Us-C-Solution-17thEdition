#include <stdio.h>
int sum(int a1[][6],int a2[][6],int,int );
int main(){
	int arr1[6][6]={1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1};
	int arr2[6][6]={1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1};
	sum(arr1,arr2,6,6);
	return 0;
}

int sum(int a1[][6],int a2[][6],int col,int row ){
	int i,j; int arrsum[6][6];
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			arrsum[i][j]=a1[i][j]+a2[i][j];
		}
	}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d ",arrsum[i][j]);
		}
		printf("\n");
	}
	
	return;
}

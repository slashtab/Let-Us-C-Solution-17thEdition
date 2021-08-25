#include <stdio.h>
int transpose(int a1[][4],int a2[][4],int,int);

int main(){
	int arr1[4][4],arr2[4][4]; int i,k;
	printf("Input the data of 4*4 matrix:\n");
	for(i=0; i<4; i++){
		for(k=0; k<4; k++){
			scanf("%d",&arr1[i][k]);
		}
	}
	transpose(arr1,arr2,4,4);
	for(i=0; i<4; i++){
		for(k=0; k<4; k++){
			printf("%d",arr2[i][k]);
		}
		printf("\n");
	}
	return 0;
}

int transpose(int a1[][4],int a2[][4],int row,int col){
	int i,j;
	for(i=0; i<row;i++){
		for(j=0; j<col; j++){
			a2[j][i]=a1[i][j];
		}
	}
	return;
}

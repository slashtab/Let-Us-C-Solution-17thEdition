#include<stdio.h>
int symmetry(int j[][4],int,int);
int main(){
	int i,k; int arr[4][4];
	printf("Input the data of 4*4 matrix to find if it is symmetric:\n");
	for(i=0; i<4;i++){
		for(k=0; k<4; k++){
			scanf("%d",&arr[i][k]);
		}
	}
	int ans=symmetry(arr,4,4);
	printf("%d",ans);
	return 0;
}

int symmetry(int j[][4],int row,int col){
	int i,k;
	for(i=0; i<row;i++){
		for(k=0; k<col; k++){
			if(j[i][k]==j[k][i]){
				continue;
			}
			else{
				return 0;
			}
		}
	}
	return 1;
}

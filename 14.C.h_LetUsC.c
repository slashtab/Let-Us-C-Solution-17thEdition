#include<stdio.h>
int arrange(int a1[][5],int,int);
int main(){
	int i,j,arr[4][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	arrange(arr,4,5);
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int arrange(int a1[][5],int row,int col){
	int i,j,temp,k,m=0;
	while(m<2){
	for(i=0;i<row;i++){
		temp=a1[i][col-1];
		for(j=5;j>=2;j--){
			k=a1[i][j-2];
			a1[i][j-2]=temp;
			temp=k;
		}
		a1[i][col-1]=temp;
	}
		m++;
	}
	return;
}

#include<stdio.h>
int largest(int j[][5],int,int);
int main(){
	int a[5][5]={
				{11,1,7,9,7},
				{13,54,56,2,5},
				{23,43,89,22,13},
				{14,15,17,16,19},
				{45,3,6,8,10}
				};
	int g=largest(a,5,5);
	printf("%d",g);
	return 0;
}

int largest(int j[][5],int row,int col){
	int m=j[0][0],i,k;
	for(i=0; i<row; i++){
		for(k=0; k<col-1; k++){
			if(m<j[i][k+1]){
				m=j[i][k+1];
			}
			else{
				m=m;
			}
			
		}
	}
	return m;
}

#include <stdio.h>
int smallest(int*,int);
int main(){
	int arr[25]={2,3,-11,32,54,22,67,21,2,55,87,98,54,32,-23,45,81,83,49,33,11,67,43,19,24};
	int ans=smallest(&arr[0],25);
	printf("The smallest no in array is %d",ans);
	return 0;
}

int smallest(int *j,int n){
	int i,m=*j;
	for(i=0; i<n-1; i++){
		if(m<*(j+1)|| m==*(j+1)){
			m=m;
			printf("1");
		}
		else{
			m=*(j+1);
			printf("2");
		}
		
		j++;
	}
	return m;
}

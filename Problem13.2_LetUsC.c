#include <stdio.h>

int main(){
	int arr1[5],arr2[5],i,j;
	printf("Input the values of first array:\n");
	for (i=0; i<5; i++){
		scanf("%d",&arr1[i]);
	}
	for (i=0,j=4; i<5,j>=0; i++,j--){
		arr2[j]=arr1[i];
	}
	for (i=0;i<5;i++){
		printf("%d ",arr2[i]);
	}
	return 0;
}




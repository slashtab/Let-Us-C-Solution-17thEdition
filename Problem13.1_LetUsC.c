#include <stdio.h>

int main(){
	int i,j;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	for(i=0; i<10; i=i+2){
		int temp=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=temp;
	}
	for (j=0; j<10; j++){
		printf("%d ",arr[j]);
	}
	return 0;
}

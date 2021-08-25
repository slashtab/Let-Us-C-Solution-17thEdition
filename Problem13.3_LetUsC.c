#include <stdio.h>

int main(){
	int arr[10]={7,3,5,4,6,7,2,4,6,7};
	int i,n,count=0;
	printf("Input the number to be found:\n");
	scanf("%d",&n);
	for(i=0; i<10; i++){
		if(arr[i]==n){
			count++;
		}
		
	}
	printf("The number %d, exist %d times in array.",n,count);
	return 0;
}

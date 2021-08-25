#include <stdio.h>

int main(){
	int i,j,n;
	printf("Please provide the number of entry(n) in array:\n");
	scanf("%d",&n);
	int arr[n];
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(i=0,j=n-1; i<n,j>=0;i++,j--){
		if(arr[i]==arr[j]){
			printf("index %dth from start and last are equal.",i);
		}
	}
	return 0;
}

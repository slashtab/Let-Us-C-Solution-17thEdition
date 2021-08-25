#include <stdio.h>

int main(){
	int i,j,k,n=25;
	int arr[25]={2,3,-11,32,54,22,67,21,2,55,87,98,54,32,-23,45,81,83,49,33,11,67,43,19,24};
for(i=1; i<n; i++){
	for(k=0; k<i; k++){
	
	if(arr[k]>arr[i]){
		int temp=arr[k];
		arr[k]=arr[i];
		/*printf("%d\n",arr[0]);*/
		for(j=k+2; j<=i+1; j++){
			int m1=arr[j-1];
			arr[j-1]=temp;
			temp=m1;
		}
		break;
	}
}
}
	for(i=0; i<n; i++){
		printf("%d, ",arr[i]);
	}
	return 0;
}

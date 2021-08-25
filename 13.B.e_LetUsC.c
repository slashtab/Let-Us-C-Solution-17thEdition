#include <stdio.h>

int modify(int*,int);
int main(){
	int i;
	int arr[10]={11,12,13,14,15,16,17,18,19,20};
	modify(&arr[0],10);
	for(i=0; i<10; i++){
		printf("%d, ",arr[i]);
	}
	return 0;
}

int modify(int *j,int n){
	int i;
	for(i=0; i<n; i++){
		*j=(*j)*3;
		j++;
	}
	return;
}

#include <stdio.h>
#define MAX 25

int main(){
	int arr[MAX],i,pos=0,neg=0,even=0,odd=0;
	printf("Input the the number and enter:\n");
	for(i=0; i<MAX; i++){
		scanf("%d",&arr[i]);
	}
	for(i=0; i<MAX; i++){
		if(arr[i]>0){
			pos++;
			arr[i]%2==0?(even++):(odd++);
		}
		else if(arr[i]<0){
			neg++;
			arr[i]%2==0?(even++):(odd++);
		}
	}
	printf("Pos=%d Neg=%d even=%d odd=%d",pos,neg,even,odd);
}

#include<stdio.h>

int main(){
	int i;
	char str[17]; int s,m=2;
	printf("Input the number:\n");
	scanf("%s",str);
	for(i=0; str[i]=; i+2){
		s=(str[i]-48)*m;
		if(s>=10){
			str[i]=s-9;
		}
		else{
			str[i]=s;
		}
	}
	printf("%d",str[2]);

	return 0;
}

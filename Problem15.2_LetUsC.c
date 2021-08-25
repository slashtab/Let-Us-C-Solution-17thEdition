#include<stdio.h>

int main(){
	char str[6];
	int num=0,i;
	printf("Input the string containing the number:\n");
	scanf("%s",str);
	for(i=0; str[i]!='\0';i++){
		if(str[i]>=48 && str[i]<=57){
			num=num*10+(str[i]-48);
		}
		else{
			printf("Not a valid string\n");
			return 1;
		}
	}
	printf("%d\n",num);
	return 0;
}

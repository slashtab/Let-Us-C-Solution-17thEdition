#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char str[50];
	char onelastterm[50]="A";
	char lastterm[50]="B";
	for(i=1;i<=5;i++){
		strcpy(str,lastterm);
		strcat(str,onelastterm);
		printf("%s\n",str);
		strcpy(onelastterm,lastterm);
		strcpy(lastterm,str);
		
	}
	return 0;
}

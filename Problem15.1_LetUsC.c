#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char str[20], test[21]; int i,posn,n;
	printf("Input the string:\n");
	scanf("%s",str);
	printf("Input the position and no of character:\n");
	scanf("%d%d",&posn,&n);
	char *s,*t;
	s=str; t=test;
	if(posn<0 || posn>strlen(str)){
		printf("Improper input.");
		exit(1);
	}
	if(n<0){
		n=0;
	}
	if(n>strlen(str)){
		n=n-strlen(str)-1;
	}
	s=s+posn;
	for(i=0; i<n; i++){
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
	printf("The substring is: %s\n",test);
	return 0;
}

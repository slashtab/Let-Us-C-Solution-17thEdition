#include <stdio.h>

int main() {
	//code
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c){
	    if (b+c>a)
	        printf("valid sides for triangle.");
	    else
	        printf("invalid sides for triangle.");
	}
	else if (b>a && b>c){
	    if (a+c>b)
	        printf("valid sides for triangle.");
	    else
	        printf("invalid sides for triangle.");
	}
	else if (c>b && c>a){
	    if (b+a>c)
	        printf("valid sides for triangle.");
	    else
	        printf("invalid sides for triangle.");
	}
	return 0;
}
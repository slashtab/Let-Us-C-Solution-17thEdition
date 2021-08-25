#include <stdio.h>

int main() {
	//code
	int inp,d1,d2,d3,d4,d5;
	scanf("%d",&inp);
	d1=inp%10; inp=inp/10; d2=inp%10; inp=inp/10; d3=inp%10;inp=inp/10; d4=inp%10;inp=inp/10; d5=inp%10;
	printf("The Reversed number is %d",d1+d2+d3+d4+d5);
	return 0;
}
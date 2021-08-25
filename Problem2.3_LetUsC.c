#include <stdio.h>

int main() {
	//code
	int amount;
	scanf("%d",&amount);
	int m100=amount/100;
	amount=amount%100;
	int m50=amount/50;
	amount=amount%50;
	int m10=amount/10;
	amount=amount%10;
	int m5=amount/5;
	amount=amount%5;
	int m2=amount/2;
	amount=amount%2;
	int m1=amount/1;
	printf("The minimum amount of currency needed is %d",m100+m50+m10+m5+m2+m1);
	return 0;
}
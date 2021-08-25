#include <stdio.h>

int main() {
	//code
	int l,b,area,per;
	scanf("%d%d",&l,&b);
	per=2*(l+b); area=l*b;
	if (area>per)
	    printf("The area is greater than perimeter.");
	else
	    printf("The area is smaller than perimeter.");
	return 0;
}
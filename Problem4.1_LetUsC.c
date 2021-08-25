#include <stdio.h>

int main() {
	//code
	int year;
	scanf("%d",&year);
	
	if (year%100==0 && year%400==0)
	    printf("The year is leap year");
	else if (year%4==0 && year%100!=0)
	    printf("The year is leap year");
	else
	    printf("The year is not a leap year");
	return 0;
}
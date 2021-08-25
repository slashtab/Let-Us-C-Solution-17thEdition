#include <stdio.h>

int main() {
	//code
	long int year;
	printf("enter the year");
	scanf("%ld",&year);
	int day=year*365%7;
	if (day==0)
	    printf("\nThe day on 1st jan is Monday");
	else if (day==1)
	    printf("\nthe day on 1st jan is Tuesday");
	else if (day==2)
	    printf("\nthe day on 1st jan is wednesday");
	else if (day==3)
	    printf("\nthe day on 1st jan is Thursday");
	else if (day==4)
	    printf("\nthe day on 1st jan is friday");
	else if (day==5)
	    printf("\nthe day on 1st jan is saturday");
	else if (day==6)
	    printf("\nthe day on 1st jan is sunday");
	return 0;
}
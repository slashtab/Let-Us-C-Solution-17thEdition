#include <stdio.h>

int main() {
	//code
	int a,b,c;
	printf("Enter the valid triangle sides:\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a*a+b*b==c*c ||b*b+c*c==a*a ||c*c+a*a==b*b)
	    printf("the triangle is right angle triangle.");
	else if (a==b&&b!=c || b==c&& c!=a || c==a && a!=b)
	    printf("triangle is an isosceles.");
	else if (a==b && b==c && c==a)
	    printf("Triangle is an equilateral.");
	else if (a!=b && b!=c && c!=a)
	    printf("the triangle is scalene");
	return 0;
}
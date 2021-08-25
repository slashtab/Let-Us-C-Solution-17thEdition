#include <stdio.h>

int gcd(int,int);

int main(void) {
	// your code goes here
	int num1,num2;
	printf("Input the number for GCD 1st number> 2nd number :\n");
	scanf("%d%d",&num1,&num2);
	gcd(num1,num2);
	return 0;
}

int gcd(int a,int b){
    int rem=1;
    int qt;
    while(rem!=0){
        qt=a/b;
        rem=a-qt*b;
        a=b;
        if (rem>0){
        b=rem;
        }
    }
    printf("The GCD of given Two nuber is %d",b);
}
#include <stdio.h>

#define AMEAN(x,y) ((x+y)/2)
#define ABS(x) (x<0?(-1*x):x)
#define UPTOLOW(x) (x+32)
#define BIG(x,y,z) (x>y?(x>z?x:z):(y>z?y:z))

int main(){
	int a=AMEAN(6,10);
	int b=ABS(-5);
	char c=UPTOLOW('K');
	int d=BIG(6,7,8);
	printf("%d %d %c %d",a,b,c,d);
}

#include <stdio.h>
#include <math.h>
int main() {
	//code
	int t; float wcf,v;
	scanf("%d%f",&t,&v);
	wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	printf("The wind chill factor is %f",wcf);
	return 0;
}
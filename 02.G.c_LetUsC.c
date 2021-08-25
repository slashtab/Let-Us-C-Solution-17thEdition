#include <stdio.h>
#include <math.h>
int main() {
	//code
	int L1,L2,G1,G2;
	printf("Enter values in degree of L1 L2 G1 AND G2:");
	scanf("%d%d%d%d",&L1,&L2,&G1,&G2);
	float pi=3.14; float a1=L1*pi/180, a2=L2*pi/180, o1=G1*pi/180,o2=G2*pi/180;
	double D=3963*acos(sin(a1)*sin(a2)+cos(a1)*cos(a2)*cos(o2-o1));
	printf("\n%f",D);
	return 0;
}
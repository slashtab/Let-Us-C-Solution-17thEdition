#include <stdio.h>
#include <math.h>
int main() {
	//code
	int C, D, E;
	scanf("%d%d",&C,&D);
	E=C; C=D; D=E;
	printf("C=%d D=%d",C,D);
	return 0;
}
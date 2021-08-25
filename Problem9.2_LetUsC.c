#include <stdio.h>
double marks(int ,int ,int , float *,float *);
int main(void) {
	// your code goes here
	int m1,m2,m3; float average,percent;
	scanf("%d%d%d",&m1,&m2,&m3);
	marks(m1,m2,m3,&average,&percent);
	printf("avg=%f, percent=%f",average,percent);
	return 0;
}

double marks(int a,int b,int c, float *av,float *prcent){
    *av=(a+b+c)/3.0;
    *prcent=((a+b+c)/300.0)*100.0;
}
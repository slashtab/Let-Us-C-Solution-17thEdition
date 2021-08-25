#include <stdio.h>
#include <math.h>

float calculate(int ,int ,int , int ,int , float *,float *,float *);
int main(void) {
	// your code goes here
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	float sum,average,std_devn;
	calculate(a,b,c,d,e,&sum,&average,&std_devn);
	printf("Sum=%.2f,Average=%.2f,Standard deviation=%f",sum,average,std_devn);
	return 0;
}

float calculate(int a,int b,int c, int d,int e, float *s,float *av,float *stdev){
    *s=a+b+c+d+e;
    *av=*s/5;
    *stdev=sqrt((pow(a-*av,2)+pow(b-*av,2)+pow(c-*av,2)+pow(d-*av,2)+pow(e-*av,2))/5);
}
    
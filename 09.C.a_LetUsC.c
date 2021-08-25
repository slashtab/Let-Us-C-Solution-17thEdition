#include <stdio.h>
int circular(int *,int *,int *);
int main(void) {
	// your code goes here
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	circular(&x,&y,&z);
	printf("x=%d, y=%d, z=%d",x,y,z);
	return 0;
}

int circular(int *a,int *b,int *c){
    int tem1;
    tem1=*a;
    *a=*c;
    *c=*b;
    *b=tem1;
}
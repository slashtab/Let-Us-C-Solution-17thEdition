#include <stdio.h>
#include <stdlib.h>

int primefact(int);

int main(void) {
	// your code goes here
	int m,p;
	scanf("%d",&m);
	printf("Prime factor are:\n");
	p=primefact(m);
	printf("%d",p);
	
	return 0;
}

int primefact(int m){
    int q,res;
    while(1){
        if (m%2==0 && m!=2){
          q=m/2;
          m=q;
          res= 2;
        }
        else if (m%3==0 && m!=3){
          q=m/3;
          m=q;
          res= 3;
        }
        else if (m%5==0 && m!=5){
          q=m/5;
          m=q;
          res= 5;
        }
        else if (m%7==0 && m!=7){
          q=m/7;
          m=q;
          res= 7;
        }
        else if(m==2 || m==3 || m==5 ||m==7){
            return m;
        }
        printf("%d, ",res);
    }
}
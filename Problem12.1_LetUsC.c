#include <stdio.h>

# define ISUPPER(x) (x>=65 && x<=90?1:0)
#define  ISLOWER(x) (x>=97 && x<=122?1:0)
#define ISALPHA(x) (ISLOWER(x) || ISUPPER(x))
#define BIG(x,y) (x>y?x:y)
int main(void) {
	// your code goes here
	char ch1; int d1,d2;
	scanf("%c%d%d",&ch1,&d1,&d2);
	if(ISUPPER(ch1)==1){
	    printf("Capital letter\n");
	}
	if(ISLOWER(ch1)==1){
	    printf("small letter\n");
	}
	if (ISALPHA(ch1)==1){
	    printf("Alphabet\n");
	}
	int d=(BIG(d1,d2));
	printf("%d",d);
	return 0;
}


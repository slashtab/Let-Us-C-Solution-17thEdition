#include <stdio.h>
#include <math.h>

int binary(int);
int power(int);
int main(void) {
	// your code goes here
	int x;
	scanf("%d",&x);
	int ans=binary(x);
	printf("%d",ans);
	return 0;
}

int binary(int n){
    int m=power(n);
    int rem=n-pow(2,m);
    int sum;
    if (rem>=0){
        sum=sum+pow(10,m)+binary(rem);
        
    }
    else{
        sum=sum+0;
    }
    return sum;
}


int power(int n){
    int index=0;
    while(n/2!=0){
        n=n/2;
        index+=1;
    
    }
    
    return index;
}
#include <stdio.h>
#include <math.h>
int power(int,int);
int main(void) {
	// your code goes here
	int x,m,ans=0; scanf("%d",&x);
	
	
	while(1){
	    int m=power(x,2);
	    x=x-pow(2,m);
	    if(m>0){
	        ans=ans+pow(10,m);
	    }
	    else if(m==0){
	        ans=ans+1;
	    }
	    if(x==0){
	        break;
	    }
	}
	printf("%d",ans);
	
	return 0;
}

int power(int n,int fact){
    int index=0;
    while(n/fact!=0){
        n=n/fact;
        index+=1;
    
    }
    
    return index;
}
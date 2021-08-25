#include <stdio.h>

int main(void) {
	// your code goes here
	int n,m=0,count=0; printf("input the number n:\n"); scanf("%d",&n);
	int octal[100];
	while(n!=0){
	    int dd=n/8; int rem=n%8; n=dd;
	    octal[m]=rem;
	    m++;
	   }
	if (m%2==1){
	while(count<=(m-1)/2){
	    int temp=octal[count]; octal[count]=octal[(m-1)-count]; octal[(m-1)-count]=temp;
	    printf("%d",octal[count]);
	    count++;
	}
	while (count<m){
	    printf("%d",octal[count]);
	    count++;
	}}
	else if(m%2==0){
	    while(count<m/2){
	    int temp=octal[count]; octal[count]=octal[(m-1)-count]; octal[(m-1)-count]=temp;
	    printf("%d",octal[count]);
	    count++;
	}
	while (count<m){
	    printf("%d",octal[count]);
	    count++;
	}
	    
	}
	return 0;
}


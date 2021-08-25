#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// your code goes here
	int choice,num,i,fact;
	while (1){
	    printf("\nEnter:\n1 for factorial\n2 for prime or not\n3 for odd or even\n4 to exit the programme\n");
	    printf("your choice?");
	    scanf("%d",&choice);
	    switch (choice){
	        case 1:
	            printf("\nenter the number for factorial:");
	            scanf("%d",&num);
	            fact=1;
	            for(i=1; i<=num; i++){
	                fact*=i;
	            }
	            printf("\nfactorial of given number is %d",fact);
	            break;
	       case 2:
	            printf("\nenter the number for checking prime or not:");
	            scanf("%d",&num);
	            for (int i=2; i<num; i++){
	                if(num%i==0){
	                    printf("\nthe number is not prime.");
	                    break;
	                }
	            }
	            if (i==num){
	                printf("\nthe number is prime.");
	            }
	            break;
	       case 3:
	            printf("\nenter the number for checking odd or even:");
	            scanf("%d",&num);
	            if (num%2==0){
	                printf("\nThe number is even.");
	            }
	            else{
	                printf("\nthe number is odd.");
	            }
	            break;
	      case 4:
	           printf("\nProgramme exited succesfully!");
	           exit(0);
	      default:
	            printf("\nwrong choice!\a\n");
	    }
	}
	return 0;
}


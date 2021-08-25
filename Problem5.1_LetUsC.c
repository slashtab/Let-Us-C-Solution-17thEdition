#include <stdio.h>

int main() {
	//code
	int emp=0;
	while(++emp<=10){
	    int hrs; scanf("%d",&hrs);
	    int overtime=hrs-40;
	    if (overtime>0){
	        printf("The overtime pay is %d \n",12*overtime);
	    }
	    else
	        printf("The overtime pay is '0'\n");
	}
	return 0;
}
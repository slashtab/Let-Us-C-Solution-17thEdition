#include <stdio.h>

int main(void) {
	// your code goes here
	int f_sub,clas,grace;
	printf("\nEnter the class of the student:");
	scanf("%d",&clas);
	switch (clas){
	    case 1:
	        printf("\nInput the number of subject failed in:");
	        scanf("%d",&f_sub);
	        // grace;
	        if (f_sub>3){
	            grace=0;
	        }
	        else{
	            grace=5*f_sub;
	        }
	        printf("\n total grace marks=%d",grace);
	        break;
	    case 2:
	        printf("\nInput the number of subject failed in:");
	        scanf("%d",&f_sub);
	        //int grace;
	        if (f_sub>2){
	            grace=0;
	        }
	        else{
	            grace=4*f_sub;
	        }
	        printf("\n total grace marks=%d",grace);
	        break;
	    case 3:
	        printf("\nInput the number of subject failed in:");
	        scanf("%d",&f_sub);
	        //int grace;
	        if (f_sub>1){
	            grace=0;
	        }
	        else{
	            grace=5*f_sub;
	        }
	        printf("\n total grace marks=%d",grace);
	        break;
	    default :
	        printf("\nwrong choice mr.!\a");
	}
	return 0;
}


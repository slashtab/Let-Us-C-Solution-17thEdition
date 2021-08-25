#include <stdio.h>

int main() {
	//code
	int hard,tensile; float c;
	printf("Input the value of hardness,carbon content,tensile strength:\n");
	scanf("%d%f%d",&hard,&c,&tensile);
	if (hard>50 && c<0.7 && tensile>5600){
	    printf("The Grade is 10");
	}
	else if(hard>50 && c<0.7){
	    printf("The Grade is 9");
	}
    else if (c<0.7 && tensile>5600){
        printf("The Grade is 8");
    }
    else if (hard>50 && tensile>5600){
        printf("The grade is 7");
    }
    else if (hard>50 || c<0.7 || tensile>5600){
	    printf("The Grade is 6");}
	else
	    printf("The grade is 5");
	return 0;
}
#include <stdio.h>

int main() {
	//code
	int x,y;
	printf("Enter the coordinates of the point:");
	scanf("%d%d",&x,&y);
    if(x==0 && y==0)
	   printf("\nthe point lies on origin.");
	else
	    if (y==0)
	        printf("\nthe point lies on the 'X' axis");
	    else
	       if (x==0)
	            printf("\nthe point lies on 'Y' axis ");
	       else
	            printf("\nenter the valid points.");
	return 0;
}
	
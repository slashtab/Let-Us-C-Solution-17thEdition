#include <stdio.h>

int main() {
	//code
	int ram,shyam,ajay;
	scanf("%d%d%d",&ram,&shyam,&ajay);
	if (ram<shyam){
	    if (ram<ajay){
	        printf("ram");
	    }
	    else{
	        //if (ajay<shyam)
	            printf("ajay");
	    }
	}
	else{
	    if (shyam<ajay){
	        printf("shyam");
	    }
	    else{
	        printf("ajay");
	    }
	}
	return 0;
}
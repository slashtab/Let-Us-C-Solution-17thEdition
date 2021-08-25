#include <stdio.h>

int leapyear(int);

int main(void) {
	// your code goes here
	int year;
	scanf("%d",&year);
	leapyear(year);
	
	return 0;
}

int leapyear(int x){
    if (x%400==0){
        printf("Year is leapyear.");
    }
    else if(x%4==0 &&x%100!=0){
      printf("Year is leapyear.");  
    }
    else{
        printf("Year is not a leapyear.");
    }
    return;
}
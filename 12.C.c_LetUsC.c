#include <stdio.h>
#include "interest.h"

int main(){
	float si=SI(100,4,5);
	float amount=AMOUNT(100,4,5);
	printf("%f  %f",si,amount);
}

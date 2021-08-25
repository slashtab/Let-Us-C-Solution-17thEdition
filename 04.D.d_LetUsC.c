#include <stdio.h>
#include <math.h>
int main() {
	//code
	float wgh,ht,BMI;
	printf("input the value of weight in Kg and height in meters:\n");
	scanf("%f%f",&wgh,&ht);
	BMI=wgh/pow(ht,2);
	if (BMI<15){
	    printf("Person is in 'starvation' condition");
	}
	else if (BMI>=15.1 && BMI<=17.5){
	    printf("Person is in 'Anorexic' condition");
	}
	else if (BMI>=17.6 && BMI<=18.5){
	    printf("Person is in 'Underweight' condition");
	}
	else if (BMI>=18.6 && BMI<=24.9){
	    printf("Person is in 'Ideal' condition");
	}
	else if (BMI>=25 && BMI<=25.9){
	    printf("Person is in 'Overweight' condition");
	}
	else if (BMI>=30 && BMI<=30.9){
	    printf("Person is in 'Obese' condition");
	}
	else if (BMI>=40){
	    printf("Person is in 'Morbidly Obese' condition");
	}
	return 0;
}
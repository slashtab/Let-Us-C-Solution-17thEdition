#include <stdio.h>
char roman(int);
int main(void) {
	// your code goes here
	int year;
	scanf("%d",&year);
	roman(year);
	
	return 0;
}

char roman(int dec){

        int th=dec/1000;
        for (int i=1; i<=th; i++){
            printf("M");
        }
        dec=dec%1000;
        int fhun=dec/500;
        for(int j=1; j<=fhun; j++){
            printf("D");
        }
        dec=dec%500;
        int hun=dec/100;
        for(int k=1; k<=hun; k++){
            printf("C");
        }
        dec=dec%100;
        int fifty=dec/50;
        for(int a=1; a<=fifty; a++){
            printf("L");
        }
        dec=dec%50;
        int tens=dec/10;
        for(int b=1; b<=tens; b++){
            printf("X");
        }
        dec=dec%10;
        int fives=dec/5;
        for(int f=1; f<=fives; f++){
            printf("V");
        }
        dec=dec%5;
        int ones=dec/1;
        for(int d=1; d<=ones; d++){
            printf("I");
        }
        return;
    
}
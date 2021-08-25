#include <stdio.h>

int main() {
	//code
	char ch;
	scanf("%c",&ch);
	if (ch>=65 && ch<=90 )
	    printf("the character is Capital letter.");
	else if (ch>=97 && ch<=122 )
	    printf("the character is small letter.");
	else if (ch>=48 && ch<=57 )
	    printf("the character is digit.");
	else if (ch>=0 && ch<=47 || ch>=58 && ch<=64 ||ch>=91 && ch<=96|| ch>=123 && ch<=127 )
	    printf("the character is special symbol.");
	else
	    printf("Please input the valid value.");
	return 0;
}
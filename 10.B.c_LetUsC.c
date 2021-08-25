#include <stdio.h>
void hanoi(int,char,char,char);
int main(void) {
	// your code goes here
	hanoi(4,'A','B','C');
	
	return 0;
}

void hanoi(int n,char from_rod,char aux_rod,char to_rod){
    if(n==0){
        return;
    }
    hanoi(n-1,from_rod,to_rod,aux_rod);
    printf("move disk %d from rod%c to rod %c\n",n,from_rod,to_rod);
    hanoi(n-1,aux_rod,from_rod,to_rod);
}
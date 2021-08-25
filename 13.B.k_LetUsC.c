#include <stdio.h>
char retrieveL(char [],int );
char retrieveR(char[],int);
char insertL(char[],char);
char insertR(char[],char);
int count(char[]);

int main(){
	char r1,r2;
	char dequeue[25]={'a','c','d','f'};
	insertL(&dequeue[0],'z');
	insertR(&dequeue[0],'m');
	r1=retrieveL(&dequeue[0],5);
	r2=retrieveR(&dequeue[0],5);
	printf("%c  %c",r1,r2);
	return 0;
}
 char retrieveL(char j[],int n){
 	return j[n];
 }

 char retrieveR(char j[],int n){
 	int m=count(&j[0]);
	return j[m-n];
 }
 
 char insertL(char j[],char n){
 	int m=count(&j[0]),i;
 	char temp=j[0]; 
 	j[0]=n;
 	for(i=1; i<=m+1; i++){
 		char k=j[i];
 		j[i]=temp;
 		temp=k;
	 }
	return;
 }
 
 char insertR(char j[],char n){
 	int m=count(&j[0]);
 	j[m+1]=n;
 	return;
 }
 
  int count(char j[]){
 	int i,fcount=-1;
 	for(i=0; i<25; i++){
		if(j[i]>0){
			fcount++;
		}
		else{
			break;
		}
	}
	return fcount;
 }
 
 

#include <stdio.h>
int max(int x,int y, int z);
int main() {
	//code
	int red,green,blue,cyan,magneta,yellow,black;
	scanf("%d%d%d",&red,&green,&blue);
	int white=max(red/255,green/255,blue/255);
	if (white!=0){
	    cyan=(white-red/255)/white;
	    magneta=(white-green/255)/white;
	    yellow=(white-blue/255)/white;
	    black=1-white;
	}
	else{
	    cyan=0,magneta=0,yellow=0,black=1;}
	printf("The CMYK data for given RGB are%d %d %d %d",cyan,magneta,yellow,black);
	return 0;
}

int max(int x,int y,int z){
    if (x>=y && x>=z)
        return x;
    else if (y>=x && y>=z)
        return y;
    else if (z>=x && z>=y)
        return z;
}
#include <stdio.h>
#include <math.h>
int main() {
	//code
	int x1,y1,x2,y2,x3,y3;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	if (sqrt(pow(x1-x2,2)-pow(y1-y2,2))+sqrt(pow(x2-x3,2)-pow(y2-y3,2))==sqrt(pow(x1-x3,2)-pow(y1-y3,2)))
	    printf("the points are collinear.");
	else
	    printf("the points are not collinear.");
	return 0;
}
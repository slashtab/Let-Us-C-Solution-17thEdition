#include <stdio.h>
#include <math.h>
int main() {
	//code
	int x,y; float r,polar_x,polar_y;
	printf("Enter x and y cartesian coordinate:");
	scanf("%d%d",&x,&y);
	r=sqrt(x*x+y*y); polar_x=r*sin(r/y); polar_y=r*cos(r/x);
	printf("\n%f %f",polar_x,polar_y);
	return 0;
}
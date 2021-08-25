#include <stdio.h>
#include <math.h>

int inornot(int,int,int,int,int,int,int,int);
float distance(int ,int , int , int );
float area(int ,int ,int ,int ,int ,int  );

int main(void) {
	// your code goes here
	int x1,x2,x3,x4,x5,x6;
	printf("input triangle coordinates x1 y1 x2 y2 x3 y3:\n");
	scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5,&x6);
	float ans=area(x1,x2,x3,x4,x5,x6);
	printf("%f\n",ans);
	int arb1,arb2;
	printf("input the arbitrary point to check if inside triangle or not?\n");
	scanf("%d%d",&arb1,&arb2);
	int ans2=inornot(x1,x2,x3,x4,x5,x6,arb1,arb2);
	printf("%d",ans2);
	return 0;
}

float distance(int x1,int y1, int x2, int y2){
    float dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return dis;
}

float area(int x1,int y1,int x2,int y2,int x3,int y3 ){
    float d1=distance(x1,y1,x2,y2);
    float d2=distance(x2, y2,  x3,  y3);
    float d3=distance( x3, y3, x1, y1);
    float S=(d1+d2+d3)/2.0;
    float ar= sqrt(S*(S-d1)*(S-d2)*(S-d3));
    return ar;
}

int inornot(int x1,int y1,int x2,int y2,int x3,int y3,int p1,int p2){
    float part1=area(p1,p2,x2,y2,x3,y3);
    float part2=area(x1,y1,p1,p2,x3,y3);
    float part3=area(x1,y1,x2,y2,p1,p2);
    float total=area(x1,y1,x2,y2,x3,y3);
    if (part1+part2+part3==total){
        return 1;
    }
    else{
        return 0;
    }
}
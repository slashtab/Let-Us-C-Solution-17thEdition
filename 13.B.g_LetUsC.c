#include <stdio.h>
#include <math.h>
float area(float*,float*,float*);
float largest(float*,int);
int main(){
	int i,count=1;
	float a[6]={137.4,155.2,149.3,160.0,155.6,149.7};
	float b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
	float angle[6]={0.78,0.89,1.35,9.00,1.25,1.75};
	float plot_area[6];
	for(i=0; i<6; i++){
		float ar=area(&a[i],&b[i],&angle[i]);
		plot_area[i]=ar;
	}
	float l_plot=largest(&plot_area[0],6);
	for(i=0; i<6; i++){
		if(l_plot!=plot_area[i]){
			count++;
		}
		else{
			break;
		}
	}
	printf("The plot %d has largest area.",count);
	
	return 0;
}

float area(float*i,float*j,float*k){
	float farea=0.5*(*i)*(*j)*sin(*k);
	return farea;
}

float largest(float*j,int n){
	float m=0.0; int i;
	for(i=0; i<n; i++){
		if(m<*j){
			m=*j;
		}
		else{
			m=m;
		}
		j++;
	}
	return m;
}

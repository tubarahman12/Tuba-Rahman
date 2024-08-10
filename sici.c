#include<stdio.h>
#include<math.h>
int main(){
	int p,r,t;
	printf("Enter principal rate and time: ");
	scanf("%d\n%d\n%d",&p,&r,&t);
	double si=(p*r*t)/100;
	double ci=p*pow((1+(r/100)),t);
	printf("Simple Interst = %f\n Compounbd Interest = %f",si,ci);
}

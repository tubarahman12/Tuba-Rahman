#include<stdio.h>
#include<math.h>
int main(){
	float p,r,t,n;
	printf("Enter principal rate and time: ");
	scanf("%f\n%f\n%f",&p,&r,&t);
	printf("enter number of times interest is compounded per year= ");
	scanf("%f",&n);
	float si=(p*r*t)/100;
	float amt=p*pow((1+(r/(n*100))),n*t);
	float ci=amt-p;
	printf("Simple Interst = %f\nCompound Interest = %f",si,ci);
}

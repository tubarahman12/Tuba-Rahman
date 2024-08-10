#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers: ");
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf("Your quadratic equation is %dx^2+%dx+%d\n",a,b,c);
	int d=b*b-(4*a*c);
	if(d>=0){
	int r1=(-b+sqrt(d))/(2*a);
	int r2=(-b-sqrt(d))/(2*a);
	printf("Your roots are %d and %d",r1,r2);
	}else {
	printf("your roots are imaginary");	
	}
	return 0;
}

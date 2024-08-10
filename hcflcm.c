#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d\t%d",&a,&b);
	int hcf,max;
	if(a>b){
		max=a;
	}else{
		max=b;
	}
	for(int i=1;i<max;i++){
		if(a%i==0&&b%i==0){
			hcf=i;
		}
	}
	printf("hcf is = %d\n",hcf);
	printf("lcm is = %d",(a*b)/hcf);
	return 0;
}

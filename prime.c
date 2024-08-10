#include<stdio.h>
int main(){
	int a,b;
	printf("enter range between which you have to find prime numbers =" );
	scanf("%d\t%d",&a,&b);
	printf("Prime numbers between %d and %d are = \n",a,b);
	for(int i=a;i<b;i++){
		if(isPrime(i)==1){
			printf("%d\n",i);
		}
	}
	return 0;
}
int isPrime(int n){
	if(n==0||n==1){
		return 0;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
		return 0;
		}
	}
		return 1;
}

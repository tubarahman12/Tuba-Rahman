#include<stdio.h>
int main(){
	int num,r;
	int s=0;
	printf("Enter a number= ");
	scanf("%d",&num);
	int n=num;
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(num==s){
		printf("%d is palindrome",num);
	}else{
		printf("%d is not a palindrome",num);
	}
	return 0;
}

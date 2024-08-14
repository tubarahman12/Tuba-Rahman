#include<stdio.h>
int main(){
	int n;
	printf("Enter size of the array = ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter numbers in the array= ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int num,loc;
	printf("Enter number which you want to insert= ");
	scanf("%d",&num);
	printf("\nEnter the loacation where you want to insert= ");
	scanf("%d",&loc);
	n=n+1;
	for(int i=n-1;i>=loc;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=num;
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
return 0;
}

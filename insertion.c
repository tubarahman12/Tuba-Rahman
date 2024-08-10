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
	int arr1[n+1];
	for(int i=0;i<loc;i++){
		arr1[i]=arr[i];
	}
	arr1[loc]=num;
	for(int i=loc+1;i<n+1;i++){
		arr1[i]=arr[i-1];
	}
	for(int i=0;i<n+1;i++){
		printf("%d\t",arr1[i]);
	}
return 0;
}

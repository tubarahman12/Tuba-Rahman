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
	int max=arr[0];int min=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Largest number = %d\n",max);
	printf("Smallest number = %d\n",min);
}

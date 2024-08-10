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
	int ele;
	printf("Enter the element which you want to search = ");
	scanf("%d",&ele);
	for(int i=0;i<n;i++){
		if(arr[i]==ele){
			printf("%d found at location %d",ele,i);
			return 0;
		}
	}
	printf("%d not found",ele);
}

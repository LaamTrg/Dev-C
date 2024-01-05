#include <stdio.h>

float average(int s[], int n){
	if(n==0){
		return 0;
	}
	int x = 0;
	for(int i=0;i<n;i++){
		x = x + s[i];
	}
	return (float)x/n;
}

int main(){
	int n;
	printf("Enter array: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter value %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	float x = average(arr,n);
	printf("Average: %g",x);
}

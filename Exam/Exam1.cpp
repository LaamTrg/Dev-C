#include <stdio.h>

int main(){
	int n, x;
	printf("Enter array: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter value %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2==0){
			x = arr[i];
			break;
		}
	}
	
	if(x!=-1){
		printf("Last even number is: %d",x);
	}else{
		printf("No even number");
	}
}

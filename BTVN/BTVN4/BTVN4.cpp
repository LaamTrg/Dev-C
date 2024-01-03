#include <stdio.h>

int main(){
	int n ,x=0;
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=1;i<=n;i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2!=0){
			x = arr[i];
			break;
		}
	}
	printf("So le cuoi cung cua mang: %d",x);
}

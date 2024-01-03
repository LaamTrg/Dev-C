#include <stdio.h>

int main(){
	int n, x, y;
	printf("Nhap mang so nguyen n: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			x = arr[i];
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>0 && arr[j]<0 && arr[i]<arr[j]){
				y = arr[i];
				arr[i] = arr[j];
				arr[j] = y;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			x = arr[i];
			break;
		}
	}
	printf("So duong nho nhat trong mang n la: %d",x);
}

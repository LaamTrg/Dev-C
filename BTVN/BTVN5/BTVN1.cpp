#include <stdio.h>

int sap_xep(int n, int arr[]){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(){
	int n;
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap mang thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	sap_xep(n,arr);
	
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

#include <stdio.h>

int main(){
	int n, x=0, arr[n];
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1);
		scanf("%d",&arr[i]);
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				x = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = x;
			}
		}
	}
	printf("Mang dao nguoc la: ");
	for(int i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}

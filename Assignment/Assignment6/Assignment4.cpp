#include <stdio.h>

int main(){
	int n, x=0, y=0, arr[n];
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Cac so trung lap trong mang la: ");
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] == arr[j]){
                printf("%d ", arr[i]);
                break;
			}
		}
	}
}

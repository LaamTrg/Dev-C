#include <stdio.h>

void in_danh_sach(int n, int arr[]) {
	printf("Danh sach gia tri cua mang: ");
	for (int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
}

int main(){
	int n;
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	int arr[n];
	
	for (int i=0;i<n;i++) {
		printf("Nhap mang thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	in_danh_sach(n, arr);
}

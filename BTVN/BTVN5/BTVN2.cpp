#include <stdio.h>

int tim_kiem(int n, int arr[], int x){
	for (int i=0;i<n;i++){
		if(arr[i] == x){
			return i;
		}
	}
	return -1;
}

int main(){
	int n, x;
	printf("Nhap mang so nguyen: ");
	scanf("%d", &n);
	int arr[n];

	for(int i=0;i<n;i++){
		printf("Nhap mang thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("Nhap gia tri x: ");
	scanf("%d",&x);

	int a = tim_kiem(n, arr, x);
	if(a != -1){
		printf("Gia tri %d nam trong mang",x,a);
	}else {
		printf("Gia tri %d khong nam trong mang",x);
	}
}


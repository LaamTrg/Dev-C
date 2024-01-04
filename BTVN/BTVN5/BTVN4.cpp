#include <stdio.h>

float tbc(int n, int arr[]){
	if(n == 0){
		return 0;
	}
	
	int x = 0;
	for (int i=0;i<n;i++){
		x += arr[i];
	}
	return (float)x/n;
}

int main() {
	int n;
	printf("Nhap mang so nguyen: ");
	scanf("%d",&n);
	int arr[n];

	for (int i=0;i<n;i++) {
		printf("Nhap mang thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}

    float x = tbc(n, arr);

    printf("Trung binh cong cua mang la: %g",x);
}


#include <stdio.h>

int main(){
	int n, x=0, y=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]%2 != 0){
			x = x + arr[i];
			y++;
		}
	}
	
	if(y==0){
		printf("Khong co so le trong mang");
	}else{
		float z = x / y;
		printf("Trung binh cong cua cac so le trong mang la: %g",z);
	}
}

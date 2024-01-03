#include <stdio.h>

int tong_chu_so(int n){
	int t = 0;
	while(n!=0){
		t += n%10;
		n /= 10;
	}
	return t;
}

int main(){
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	int tong = tong_chu_so(n);
	printf("Tong chu so nguyen %d la: %d",n,tong);
}

#include <stdio.h>

int main(){
	int n;
	printf("Nhap nam: ");
	scanf("%d",&n);
	
	if(n%4 == 0 || n%100 == 0 && n%400 == 100){
		printf("Day la nam nhuan");
	}else{
		printf("Day khong phai nam nhuan");
	}
}

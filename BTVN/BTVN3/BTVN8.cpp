#include <stdio.h>

int main(){
	int n, i=1, a=0, b=0, x;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	if(n<0){
		printf("Day khong phai so nguyen duong");
	}else if(n == 0){
		x = 0;
	}else if(n == 1){
		x = 1;
	}else{
		while(i<=n){
			x = a + b;
			a = b;
			b = x;
			i++;
		}
	}
	printf("So dung o vi tri thu %d trong day so Fibonacci la: %d", n, x);
}

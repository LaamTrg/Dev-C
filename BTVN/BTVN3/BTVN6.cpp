#include <stdio.h>

int main(){
	int n, i=1;
	float S=0;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("Day khong phai so nguyen duong");
	}else{
		while(i<=n){
			S = S + 1 / i;
			i++;
		}
	}
	printf("Tong S = 1 + 1/2 + 1/3 + … + 1/n la: %g",S);
}

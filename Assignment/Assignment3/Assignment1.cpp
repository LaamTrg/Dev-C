#include <stdio.h>
#include <math.h>

int main(){
	int n, x=0;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	
	if(n<2){
		printf("%d khong phai so nguyen to\n",n);
	}else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				x++;
			}
		}
		if(x==0){
			printf("%d la so nguyen to",n);
		}else{
			printf("%d khong phai so nguyen to",n);
		}
	}
}

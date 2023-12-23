#include <stdio.h>

int main(){
	int n, x=0;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n/2;i++){
		if (n%i==0){
            x = x + i;
        }
	}
	
	if(x==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong phai so hoan hao",n);
	}
}

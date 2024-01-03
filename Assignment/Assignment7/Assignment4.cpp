#include <stdio.h>

int ucln(int a, int b){
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
	return 1;
}

int main(){
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhapo so thu hai: ");
	scanf("%d",&b);
	
	int x = ucln(a,b);
	printf("Uoc chung lon nhat cua hai so la: %d",x);
}

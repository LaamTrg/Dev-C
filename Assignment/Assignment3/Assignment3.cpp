#include <stdio.h>

int main(){
	int n, x=0;
	
	for(;;){
		printf("Nhap mot so tu 1 den 100: ");
		scanf("%d",&n);
		if(n>=1 && n<=100){
			break;
		}else{
			printf("So nhap vao khong hop le, nhap lai\n");
		}
	}
	printf("So nhap vao hop le");
}

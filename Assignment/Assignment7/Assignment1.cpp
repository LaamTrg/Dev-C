#include <stdio.h>

int chu_vi_tam_giac(int a, int b, int c){
	int x = a + b + c;
	if(a<b+c && b<a+c && c<a+b){
		return x;
	}else{
		return 0;
	}
}

int main(){
	int a, b, c;
	int chu_vi;
	printf("Nhap canh thu nhat: ");
	scanf("%d",&a);
	printf("Nhap canh thu hai: ");
	scanf("%d",&b);
	printf("Nhap canh thu ba: ");
	scanf("%d",&c);
	
	chu_vi = chu_vi_tam_giac(a, b, c);
	if(chu_vi_tam_giac(a, b, c)){
		printf("Chu vi tam giac la: %d",chu_vi);
	}else{
		printf("Day khong phai do dai tam giac");
	}
}

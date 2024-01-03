#include <stdio.h>
#include <math.h>

int dien_tich_tam_giac(int a, int b, int c){
	float x, y, z;
	x = a + b + c;
	y = x / 2;
	z = sqrt(y*(y-a)*(y-b)*(y-c));
	if(a<b+c && b<a+c && c<a+b){
		return z;
	}else{
		return 0;
	}
}

int main(){
	int a, b, c;
	float dien_tich;
	printf("Nhap canh thu nhat: ");
	scanf("%d",&a);
	printf("Nhap canh thu hai: ");
	scanf("%d",&b);
	printf("Nhap canh thu ba: ");
	scanf("%d",&c);
	
	dien_tich = dien_tich_tam_giac(a,b,c);
	
	if(dien_tich_tam_giac(a,b,c)){
		printf("Dien tich tam giac la: %g",dien_tich);
	}else{
		printf("Day khong phai do dai tam giac");
	}
}

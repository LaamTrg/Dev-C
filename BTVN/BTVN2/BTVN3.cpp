#include <stdio.h>

int main(){
	char n;
	printf("Nhap ky tu: ");
	scanf("%c",&n);
	
	if(n>='A' && n<='Z'){
		printf("Day la chu cai in hoa");
	}else if(n>='a' && n<='z'){
		printf("Day la chu cai in thuong");
	}else if(n>='0' && n<='9'){
		printf("Day la so");
	}else{
		printf("Day la ky tu dac biet");
	}
}

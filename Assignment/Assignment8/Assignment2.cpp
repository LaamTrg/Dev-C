#include <stdio.h>
#include <string.h>

int main(){
	char s[20];
	printf("Nhap mang s: ");
	scanf("%s",s);
	
	int x = strlen(s);
	for(int i=0;i<x;i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i] = s[i] - 'a' + 'A';
		}
	}
	printf("Chuoi in hoa la: %s",s);
}

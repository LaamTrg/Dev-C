#include <stdio.h>
#include <string.h>

int main(){
	char s[20];
	printf("Nhap mang s: ");
	scanf("%s",s);
	
	int x = strlen(s);
	for(int i=0;i<x;i++){
		for(int j=0;j<x-i-1;j++){
			if(s[j] > s[j+1]){
				char tmp = s[j];
				s[j] = s[j+1];
				s[j+1] = tmp;
			}
		}
	}
	printf("Chuoi sap xep the thu tu alphabet la: %s",s);
}

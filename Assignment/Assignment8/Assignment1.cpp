#include <stdio.h>
#include <string.h>

int main(){
	char s[20];
	printf("Nhap mang s: \n");
	scanf("%s",s);
	
	int kt = strlen(s);
	for(int i=0;i<kt/2;i++){
		char tmp = s[i];
		s[i] = s[kt-i-1];
		s[kt-i-1] = tmp;
	}
	printf("Sau khi dao nguoc: %s",s);
}

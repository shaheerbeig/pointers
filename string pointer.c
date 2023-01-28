#include<stdio.h>
#include<string.h>
int main(){
	
	char str[100];
	char *ptr;
	ptr=str;
	int i,length;
	printf("enter the string you want to store\n");
	gets(str);
	
	for(i=0;i<strlen(str);i++){
		printf("%c",*(ptr + i));
	}
	
}
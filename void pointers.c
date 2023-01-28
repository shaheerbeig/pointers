#include<stdio.h>
int main(){
	void *ptr;
	int a[5]={1,2,3,4,5};
	char str[100];
	ptr=a;
	int i;
	
	for(i=0;i<5;i++){
		printf(" %d ", *(int *)(ptr + (4*i)));
	}
	printf("\nENTER THE STRING \n");
	gets(str);
	
	ptr=str;
	for(i=0;i<strlen(str);i++){
		printf("%c",*(char *)(ptr + i));
	}
}
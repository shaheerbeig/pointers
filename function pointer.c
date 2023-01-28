#include<stdio.h>

int sum(int a, int b){
	int total=a+b;
	return total;
}

int main(){
	int s=0,a,b;
	int (*ptr)(int ,int )=&sum;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	s=(*ptr)(a,b);
	printf("the value of sum is %d",s);
	
}

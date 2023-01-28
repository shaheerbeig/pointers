#include<stdio.h>
void fun(int *,int *);
int main(){
	int x=5,y=7;
	fun(&x,&y);
	printf("value of x =%d \n value of y=%d \n",x,y);
}

void fun(int*a,int*b){
	*a=8;
	*b=9;
	printf("value of x =%d \n value of y=%d \n",*a,*b);
}
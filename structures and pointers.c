#include<stdio.h>
struct students{
	int rollnumber;
	char name[20];
};

int main(){
	struct students s1[10];
	struct students*ptr;
	ptr=&s1;
	printf("ENTER MARKS OF STUDENTS \n");
	for(int i=0;i<5;i++){
		scanf("%d",&s1[i].rollnumber);
	}
	for(int i=0;i<5;i++){
		printf("MARKS ARE %d \n",*(ptr[i])rollnumber);
	}
}
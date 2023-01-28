#include<stdio.h>

static struct student{
	char name[20];
	char rollnumber[10];
	int marks;
};

void input(struct student * ptr){
	printf("enter your name \n");
	scanf("%s",&ptr->name);
	fflush(stdin);
	printf("enter your roll number \n");
	scanf("%s",&ptr->rollnumber);
	fflush(stdin);
	printf("enter your marks \n");
	scanf("%d",&ptr->marks);
}


void display(struct student *ptr2){
	printf("%s \n",ptr2->name);
	printf("%s \n",ptr2->rollnumber);
	printf("%d \n",ptr2->marks);
}

int main(){
	struct student detail;
	input(&detail);
	display(&detail);
}

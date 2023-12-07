#include<stdio.h>

int main(){
	int n1,n2,temp;
	printf("Enter the first number: \n"); scanf("%d",&n1);
	printf("Enter the second number \n"); scanf("%d",&n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("The first number is:%d \n",n1);
	printf("The second number is:%d \n",n2);
	return 0;
}

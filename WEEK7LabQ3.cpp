#include<stdio.h>

int main(){
	int studentNo;
	float midterm,final,average;
	printf("Enter students student number: \n"); scanf("%d",&studentNo);
	printf("Enter students midterm exam grade: \n"); scanf("%f",&midterm);
	printf("Enter students final exam grade: \n"); scanf("%f",&final);
	
	average=midterm*0.4+final*0.6;
	printf("Students school number is:%d \n",studentNo);
	printf("Students average is:%f",average);
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int choice;
	float r,perimeter,area;
	printf("Enter your choice [1 or 2] \n");
	printf("Enter your choice: \n"); scanf("%d",&choice);
	printf("Enter the radius \n"); scanf("%f",&r);
	if(choice == 1){
		perimeter=2*M_PI*r;
		printf("The perimeter is:%f \n",perimeter);
	}
	else if(choice == 2){
		area=M_PI*pow(r,2);
		printf("The area is:%f\n",area);
	}
	else
	printf("You have entered wrong. \n");
	
	
	return 0;
}

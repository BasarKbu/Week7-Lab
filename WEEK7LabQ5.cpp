#include<stdio.h>

int main(){
	int money,k_100=0,k_50=0,k_20=0,k_10=0;
	printf("Enter your money: \n"); scanf("%d",&money);
	if(money>100 || money == 100){
		while(money>100 || money == 100){
			money-=100;
			k_100++;
		}
		printf("The amount of 100 is:%d \n",k_100);
	}
	 if(money>50 || money == 50){
		while(money>50 || money == 50){
			money-=50;
			k_50++;
		}
		printf("The amount of 50 is:%d \n",k_50);
	}
	 if(money>20 || money == 20){
		while(money>20 || money == 20){
			money-=20;
			k_20++;
		}
		printf("The amount of 20 is:%d \n",k_20);
	}
	if(money>10 || money == 10){
		while(money>10 || money || 10){
			money-=10;
			k_10++;
		}
		printf("The amount of 10 is:%d \n",k_10);
	}
	
	
	
	return 0;
}

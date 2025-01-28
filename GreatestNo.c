// find the largest of three number

#include <stdio.h>
#include <conio.h>

int main(){
	
	int num1,num2,num3;
	
	printf("Enter First Number: ");
	scanf("%d",&num1);
	
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	
	printf("Enter Third Number: ");
	scanf("%d",&num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("largest no num1");
		}else{
			printf("largest no num3");
		}
	}else if(num2>num3){
			printf("lagest no num2");
		}else{
			printf("largest no num3");
	}
	
	
	return 0;
}

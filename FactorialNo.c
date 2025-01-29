// factorial of a number using recursion

#include <stdio.h>
#include <conio.h>

int factorial(int num){
	int fact;
	
	if(num == 1){
		return 1;
	}else{
		fact = num * factorial(num-1);
		return fact;
	}
}



int main(){
	
	int num,fact;
	
	printf("\n Enter a number: ");
	scanf("%d",&num);
	
	fact = factorial(num);
	printf("\n Factorial of %d = %d",num,fact);
	
	return 0;
}

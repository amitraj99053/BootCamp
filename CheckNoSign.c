// CHECK IF A NUMBER IS POSITIVE, NEGATIVE, OR ZERO

#include <stdio.h>
#include <conio.h>

int main(){
	
	int num;
	
	printf("Enter A Number: ");
	scanf("%d",&num);
	
	if(num==0){
		printf("You Entered Zero");
	}else if(num<0){
		printf("You Entered Negative No");
	}else{
		printf("You Entered Positive No");
	}
	return 0;
}

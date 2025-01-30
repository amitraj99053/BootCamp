#include <stdio.h>
#include <conio.h>

int addition(int num1, int num2){
    return num1+num2;
}

int subtract(int num1, int num2){
    return num1-num2;
}

int multiplication(int num1, int num2){
    return num1*num2;
}

int division(int num1, int num2){
    return num1/num2;
}




int main()
{
    int num1,num2;
    printf("Enter 1st no.\n");
    scanf("%d",&num1);

    printf("Enter 2nd no.\n");
    scanf("%d",&num2);

    int sum = addition(num1,num2);
    printf("Sum of no: %d\n",sum);

    int sub = subtract(num1,num2);
    printf("Sub of no: %d\n",sub);

    int mul = multiplication(num1,num2);
    printf("Multi of no: %d\n",mul);

    int div = division(num1,num2);
    printf("Division of no: %d\n",div);
    
    
    return 0;
}
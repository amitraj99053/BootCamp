// Fibonacci series of n numbers

#include<stdio.h>
void main()
{
   int i,n,a,b,sum;
   printf("Enter number : \n");
   scanf("%d",&n);
   
    if(n<1){
        printf("invalid input \n");
    }
    for(i=1;i<=n;i++){
        sum = a+b;
        printf("%d",sum);
        a=b;
        b=sum;
    }
    getch();
}

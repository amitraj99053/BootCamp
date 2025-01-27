// Number pyramid
/*
    1
   123
  12345
 1234567
123456789     */


#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j,k,n;
	
	printf("Enter No Of Rows: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		for(j=n; j>i; j--){
	     printf(" ");
	    }
	
	    for(k=1; k<i*2; k++){
	        printf("%d",k);
		}
		
		printf("\n");

	}
	return 0;
}


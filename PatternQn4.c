// star pyramid pattern
/*   
     *
    ***
   *****
  *******
 *********
***********    */


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
	        printf("*");
		}
		
		printf("\n");

	}
	return 0;
}


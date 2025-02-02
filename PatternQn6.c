// character pyramid 

#include <stdio.h>
#include <conio.h>

int main(){
	
	int i,j,k,n;
	
	printf("Enter No Of Rows: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){  // ROW	
		for(j=1; j<=n-i; j++){   
			printf(" ");
		}
		
		for(k=0; k<2*i-1; k++){
	        printf("*");
		}
		
		printf("\n");
	}
}

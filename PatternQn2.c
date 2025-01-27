// inverted right angled triangle

#include <stdio.h>
#include <conio.h>

int main(){
	
	int i,j,n;
	
	printf("Enter No Of Rows To Print: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){  	// i = row 
		for(j=n; j>=i; j--){  	// j = col
		  printf("* ");
		}
	      printf("\n");
	}
	
	return 0;
}


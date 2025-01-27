// right angled triangle

#include <stdio.h>
//#include <conio.h>

int main(){
	
	int i,j,n;
	
	printf("Enter No Of Rows To Print: ");
	scanf("%d",&n);
	
	// i = row 
	// j = col
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
		  printf("* ");
		}
	      printf("\n");
	}
	
	
	
	return 0;
}



#include <stdio.h>
#include <conio.h>

int main(){
	int n,i,j,k,l;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		for(j=i; j<n; j++){
			printf(" ");
		}
		
		for(k=1; k<=i; k++){
			printf("%d",k);
		}
		
		for(l=i-1; l>=1; l--){
			printf("%d",l);
		}
		
		printf("\n");
		
	}
}

// row & column input types
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter no of Rows: ");
    scanf("%d",&n);

    printf("Enter no of Columns: ");
    scanf("%d",&m);

    // print star upto n
    for(int i=1; i<=n; i++){ // row
        for(int i=1; i<=m; i++){  // column
        printf("* ");
    }
    printf("\n");
    }
    
}
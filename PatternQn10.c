// enter n no to print pattern n*n
#include <stdio.h>

int main(){
    int n;
    printf("Enter no: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){  // row
        for(int j=1; j<=n; j++){  // col
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
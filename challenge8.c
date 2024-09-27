#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    for(i=0 ; i<=n ; i++ ){
        if(i == 0 || i == 1 ){
            printf("F(%d) = %d \n",i , i );
        }
        else {
            printf("F(%d) = %d \n",i,(n-2)+(i-1));
        }
    }
    return 0;
}
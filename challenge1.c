#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    printf("entrer un nomber :");
    scanf("%d",&x);
    for(int i = 0 ; i <= 10 ; i++){
        printf("%d * %d = %d \n",x,i,x*i);
    }
    return 0;
}
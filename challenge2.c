#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int f = 1 ;
    printf("entrer un nomber :");
    scanf("%d",&x);
    for(int i = 1 ; i <= x ; i++){

            f=f*i;
    }
     printf("%d! = %d \n",x,f);
    return 0;
}

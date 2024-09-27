#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i ;
    int  s=0;
    printf("entrer un nomber :");
    scanf("%d",&x);
    for( i = 1 ; i <= x ; i++){
        s = s + i ;
        printf("+ %d  ",i);
      }
     printf("= %d \n",s);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i ;
    printf("entrer un nomber :");
    scanf("%d",&x);
    for(i = 1 ; i <= x ; i++ ){
        if(i%2!=0){
           printf("%d , ",i);
        }
        else x++ ;
    }
    return 0;
}

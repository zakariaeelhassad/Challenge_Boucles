#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a , b ;
    printf("entrer un nomber :");
    scanf("%d",&a);
    printf("entrer an exposant :");
    scanf("%d",&b);
    
    int s = pow(a,b);
    printf("%d ^ %d = %d",a,b,s);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    int r = 0;

    while (n != 0) {
        int b = n % 10;
        r = r * 10 + b;
        n /= 10;
    }

    printf("Nombre inversé : %d\n", r);
    return 0;
}
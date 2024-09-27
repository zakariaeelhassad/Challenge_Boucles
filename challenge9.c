#include <stdio.h>

int main() {
    int n;
    int s = 0;
    printf("Veuillez entrer un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un entier positif.\n");
    }
    if (n == 0) {
        s = 1; 
    } else {
        while (n > 0) {
            n = n / 10;
            s++;
        }
    }

    printf("Nombre de chiffres = %d\n", s);

    return 0;
}
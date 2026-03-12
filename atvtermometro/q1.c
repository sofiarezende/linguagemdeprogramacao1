#include <stdio.h>
int main() {
    //impressão de números de 1 a n
    int n, i;
    
    printf("escreva um numero inteiro positivo: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
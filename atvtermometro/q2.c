#include <stdio.h>
int main() {
    //calculo de fatorial
    int n, i;
    int fatorial = 1;

    printf("Forneca um numero inteiro: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }

    printf("%d",fatorial);

    return 0;
}
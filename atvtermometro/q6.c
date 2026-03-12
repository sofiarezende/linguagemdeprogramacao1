#include <stdio.h>
int main() {
    //verificação de numero primo
    int n, i, x;
    int divisores = 0; //conta divisores

    
    printf("escreva um numero inteiro positivo: \n");
    scanf("%d", &n);

    //o laço está contando os divisores. todo numero primo tem apenas 2 divisores, ele mesmo e 1
    for (i = 1; i <= n; i++) {
        x = n%i;
        if (x==0){
            divisores++; //sempre que o resto for 0 isso significa que o numero n é divisível pelo numero i (que é um numero menor que n) 
        }
    }
    if (divisores==2){
        printf("o numero e primo");
    }else{
        printf("o numero nao e primo");
    }

return 0;
}
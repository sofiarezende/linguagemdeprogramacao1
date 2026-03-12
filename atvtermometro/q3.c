#include <stdio.h>
int main() {
    //soma de numeros em um array
    int n1, n2, n3, n4, n5, s;

    printf("digite 5 numeros inteiros: \n");
    scanf("%d \n %d \n %d \n %d \n %d", &n1, &n2, &n3, &n4, &n5);

    s = n1 + n2 + n3 + n4 + n5;

    printf("a soma total e: %d", s);


    return 0;
}
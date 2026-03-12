#include <stdio.h>
#include <string.h>

int main() {
    //contagem de caracteres em uma string
    char texto[100];
    printf("digite algo: ");
    fgets(texto, 100, stdin);

    //removendo o espaço do final
    texto[strcspn(texto, "\n")] = 0;

    printf("total de caracteres: %lu\n", strlen(texto)); 

    return 0;
}
#include <stdio.h>
int main() {
    //conversão de temperatura
    int n;
    float ni, nf;
    printf("voce quer converter de: \n1- celcius para fahrenheight\nou\n2- fahrenheight para celcius \n");
    scanf("%d",&n);
    switch (n){
        case 1: 
        //calculadora c para f
        printf("quantos graus celcius? ");
        scanf("%f",&ni);
        nf = (ni * 1.8) + 32;
        printf("a temperatura em fahrenheight e %.2f graus",nf); break;

        case 2:
        //calculadora f para c
        printf("quantos graus fahrenheight? ");
        scanf("%f",&ni);
        nf = (ni-32)/ 1.8;
        printf("a temperatura em celcius e %.2f graus",nf); break;

        default: printf("escolha entre 1 e 2.");
    }
    
    return 0;
}
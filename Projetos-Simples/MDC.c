#include <stdio.h>

int mdc(int um, int dois){
    int resto;
    do{
        resto = um % dois;
        um = dois;
        dois = resto;
    }while(resto != 0);
    return um;
}



int main() {
    int um,dois,resultado;
    printf("Digite o primeiro valor: ");
    scanf("%d",&um);
    printf("Digite o segundo valor: ");
    scanf("%d",&dois);
    resultado = mdc(um,dois);
    printf("%d",resultado);
    return 0;
}
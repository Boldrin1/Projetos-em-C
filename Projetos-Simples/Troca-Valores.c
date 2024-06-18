#include <stdio.h>
#include <stdlib.h>
/*Esse codigo realiza a troca das variaveis X e Y de forma invertida, baseado no valor fornecido pelo usuário*/
int main()
{
    int x,y,z;
    printf("Digite o valor inteiro de X:");
    scanf("%d",&x);
    printf("Digite o valor inteiro de Y:");
    scanf("%d",&y);
    z = x;
    x = y;
    printf("O valor invertido de X com Y é: %.1d\n", x);
    y = z;
    printf("O valor invertido de Y com X é: %.1d", y);

    return 0;
}
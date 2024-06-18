#include <stdio.h>
#include <stdlib.h>
int main()
{
    int CorF;
    printf("Voce deseja mudar Celsius para Fahrenheit ou Fahrenheit para Celsius?\n");
    printf("digite 1 para primeira opção\n");
    printf("digite 2 para segunda opção\n");
    scanf("%d",&CorF );
    if (CorF == 1){
        float Celsius;
        printf("Digite os Celsius:\n");
        scanf("%f",&Celsius);
        float fah = (9*Celsius)/5 + 32;
        printf("A transformação em Celsius para Fahrenheit é:%.2f", fah);
    }else if(CorF == 2){
        float Fahrenheit;
        printf("Digite os Fahrenheits:");
        scanf("%f",&Fahrenheit);
        float cel = (Fahrenheit - 32)*5/9;
        printf("A transformação em Fahrenheit para Celsius é:%.2f", cel);
    }
    return 0;
}
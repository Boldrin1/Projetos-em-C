#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Digite o primeiro número:");
    scanf("%d",&a);
    printf("Digite o segundo número:");
    scanf("%d",&b);
    printf("Digite o terceiro número:");
    scanf("%d",&c);
    if(a > b && a > c){
        printf("O maior numero fornecido é o primeiro numero.\n");
        printf("Maior numero:%.1d",a);
    }else if (b > a && b > c){
        printf("O maior numero fornecido é o segundo numero.\n");
        printf("Maior numero:%.1d",b);
    }else if (c > a && c > b){
        printf("O maior numero fornecido é o terceiro numero.\n");
        printf("Maior numero:%.1d",c);
    }

    return 0;
}
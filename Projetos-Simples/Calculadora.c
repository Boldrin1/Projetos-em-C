#include <stdio.h>

int main()
{
    int a,b,c;
    char opcoes;
    printf("Selecione abaixo a operação que deseja realizar: \n");
    printf("Digite '+' para adição.\n \n");
    printf("Digite '-' para subtração.\n \n");
    printf("Digite '*' para mutiplicação.\n \n");
    printf("Digite '/' para divisão.\n \n");
    printf("Digite 'r' para raiz quadrada.\n \n");
    printf("Digite 'p' para potência.\n \n");
    printf("Digite 't' para tangente.\n \n");
    scanf("%c",&opcoes);
    switch(opcoes){
        case'+':
         printf("Digite o primeiro valor:");
         scanf("%d",&a);
         printf("Digite o segundo valor:");
         scanf("%d",&b);
         c = a+b;
         printf("O resultado da adição é: %d",c);
        case'-':
         printf("Digite o primeiro valor:");
         scanf("%d",&a);
         printf("Digite o segundo valor:");
         scanf("%d",&b);
         c = a - b;
         printf("O resultado da subtração é: %d", c);
        case'*':
         printf("Digite o primeiro valor:");
         scanf("%d",&a);
         printf("Digite o segundo valor:");
         scanf("%d",&b);
         c = a * b;
         printf("O resultado da mutipliacação é: %d",c);
    }
    return 0;
}
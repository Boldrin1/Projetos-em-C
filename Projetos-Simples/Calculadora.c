#include <stdio.h>
#include <math.h>

/*Esse codigo realiza operações matematicas basicas de acordo com os valores fornecidos pelo usuario.*/

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
        case'/':
         printf("Digite o primeiro valor:");
         scanf("%d",&a);
         printf("Digite o segundo valor:");
         scanf("%d",&b);
         c = a / b;
         printf("O resultado da sua divisão é: %d",c); 
        case'p':
         printf("Digite o numero base: ");
         scanf("%d",&a);
         printf("Digite o expoente: ");
         scanf("%d",&b);
         pow(a, b) 
         printf("O resultado da sua potencia é: ");
        
    }


    return 0;
}
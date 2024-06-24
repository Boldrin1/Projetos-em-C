#include <stdio.h>

/*Esse codigo realiza a soma de 10 valores forncidos pelo usuario e, mostra qual é o maior e qual é o menor.*/

int main()
{
    int i;
    int numeros[10];
    int soma;
    int maior;
    int menor;
    printf("Digite 10 números inteiros: \n");
    for(i=0;i<10;i++){
        scanf("%d",&numeros[i]);
    }
    for(i=0; i<10; i++){
        printf("Valor: %d\n",numeros[i]);
    }
    for(i=0;i<10;i++){
     soma += numeros[i];
    }
    printf("\n");
    printf("Soma dos valores fornecidos: %d\n",soma);
    printf("\n");
    
    maior = numeros[0];
    menor = numeros[0];
    
    for(i=0;i < 10;i++){
        if(numeros[i]>maior){
            maior = numeros[i]; 
        }
        if(menor > numeros[i]){
            menor = numeros[i];
        }
    }
    
    
    printf("Maior: %d\n",maior);
    printf("Menor: %d", menor);

    return 0;
}

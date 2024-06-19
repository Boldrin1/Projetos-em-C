#include <stdio.h>
int main() {
    int n,i;
    int result = 1;
    printf("Digite o numero que deseja saber o fatorial: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        result *= i;
    }
    printf("O fatorial do numero (%d) é: %d",n,result);
    return 0;
}
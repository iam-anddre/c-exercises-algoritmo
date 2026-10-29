#include <stdio.h>

int num, maior, menor, diferenca;

int main(){
    for( int i = 0; i < 10; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        if(i == 0){
            maior = num;
            menor = num;
        } else {
            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
        }
    }
    diferenca = maior - menor;
    printf("o maior numero eh %d e o menor eh %d\n", maior, menor);
    printf("a diferenca entre eles eh %d\n", diferenca);
}
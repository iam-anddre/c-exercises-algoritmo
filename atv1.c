#include <stdio.h>

int idade;

int main(){

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7){
        printf("sua categoria eh infantil A");
    }else if (idade >= 8 && idade <= 10){
        printf("sua categoria eh infantil B");
    }else if (idade >= 11 && idade <= 13){
        printf("sua categoria eh juveni A");
    }else if (idade >= 14 && idade <= 17){
        printf("sua categoria eh juvenil B");
    }else if (idade >= 17){
        printf("sua categoria eh senior");
    }else {
        printf("idade invalida para categorizar");
    }
}
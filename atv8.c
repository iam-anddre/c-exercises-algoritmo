#include <stdio.h>

int main(){
    float nota, media;

    for (int i = 0; i < 5; i++){
        printf("digite as 3 notas do aluno %d: ", i + 1);
        scanf("%f %f %f", &nota, &nota, &nota);
    }
}
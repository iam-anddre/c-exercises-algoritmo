#include <stdio.h>

int main(){
    float nota, media;

    for (int i = 0; i < 5; i++){
        printf("digite as 3 notas do aluno %d: ", i + 1);
        scanf("%f %f %f", &nota, &nota, &nota);
        
        media = (nota + nota + nota) / 3;

        if ( media >= 7 ){
            printf("aluno %d aprovado com media %.2f \n", i + 1, media);
        }else if ( media >= 5 && media < 7 ){
            printf("aluno %d em recuperacao com media %.2f \n", i + 1, media);
        }else{
            printf("aluno %d reprovado com media %.2f \n", i + 1, media);
        }
    }
}
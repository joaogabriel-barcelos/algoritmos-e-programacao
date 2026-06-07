#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char sexo;
    printf("Digite a letra inicial do seu sexo (M, F ou NB)\n");
    scanf("%c",&sexo);

    if(sexo=='M' || sexo=='m'){
        printf("Masculino");
    }
    else if(sexo=='F' || sexo=='f'){
        printf("Feminino");
    }
    else if(sexo=='NB' || sexo=='nb'){
        printf("Não binário");
    }

    return 0;
}

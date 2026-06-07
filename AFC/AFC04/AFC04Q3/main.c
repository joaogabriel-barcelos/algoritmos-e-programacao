#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char sexo;
    printf("Digite a letra inicial do seu sexo (M ou F)\n");
    scanf("%c",&sexo);

    if(sexo=='M'){
        printf("Masculino");
    }
    else if(sexo=='F'){
        printf("Feminino");
    }
    else{
            printf("Opção inválida");
    }

    return 0;
}

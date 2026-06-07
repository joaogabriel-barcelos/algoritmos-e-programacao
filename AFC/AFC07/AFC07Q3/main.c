#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor[6]={1,2,3,4,5,6};
    int num,i;
    int encontrado = 0;
    int indice = -1;


    printf("Informe um número para a busca\n");
    scanf("%d",&num);

    for (i = 0; i<6; i++)
    {
        if (num == vetor[i])
            {
                encontrado = 1;
            indice = i;
            }
    }
    if (encontrado) {
        printf("Encontrado! Indice: %d\n", indice);
    } else {
        printf("Nao encontrado.\n");
    }
    return 0;
}

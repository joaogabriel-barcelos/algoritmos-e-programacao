#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i = 0, num, vet[5] = {2, 6, 10, 15, 20};

    setlocale(LC_ALL, "Portuguese");

    printf("Informe um número para a busca: \n");
    scanf("%d", &num);

    // O laço roda enquanto não chegar ao fim do vetor (5) E não achar o número
    while (i < 5 && vet[i] != num)
    {
        i++; // Vai para o próximo índice
    }

    // Se o 'i' terminou menor que 5, significa que o loop parou porque achou o número!
    if (i < 5)
    {
        // i + 1 serve apenas para mostrar uma posição mais "humana" (1º, 2º...) para o usuário
        printf("Número encontrado na posição %d (Índice do vetor: %d)\n", i + 1, i);
    }
    else
    {
        printf("\nNúmero não encontrado!\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[100];
    float car,totV,salarioT;

    printf("Informe o nome do vendedor\n");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = 0;
    fflush(stdin);

    printf("Informe a quantidade de carros vendidos\n");
    scanf("%f",&car);

    printf("Informe o total de vendas\n");
    scanf("%f",&totV);

    salarioT = 700 + (80*car) + (0.04*totV);
    printf("\nO salário do(a) %s é: \n%.2f\n",nome,salarioT);

    system("pause");
    return 0;
}

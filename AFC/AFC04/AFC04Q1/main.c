#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"Portuguese");
   float saldoI, saldoR;

    printf("Digite o saldo da aplicação\n");
    scanf("%f",&saldoI);
    saldoR = saldoI * 1.005;
    printf("\nO saldo reajustado é: \n%.3f",saldoR);
    return 0;
}

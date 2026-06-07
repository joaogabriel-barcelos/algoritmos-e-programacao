#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float gli[4][2],soma=0,media=0;
    int alerta=0;

    for (int i=0; i<4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
                printf("Informe a glicemia em JEJUM do Paciente %d:\n", i + 1);
            else
                printf("Informe a glicemia PÓS-REFEIÇÃO do Paciente %d:\n", i + 1);

            scanf("%f",&gli[i][j]);

            soma = soma + gli[i][j];
        }
        if (gli[i][1]>140)
        {
            alerta = alerta + 1;
        }

    }

    media = soma/8;

    printf("\nA média geral da glicemia é: %.2f\n", media);
    printf("\nA quantidade de pacientes em estado de alerta é: %d",alerta);
    printf("\n");
    return 0;
}

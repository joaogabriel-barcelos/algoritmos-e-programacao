#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int freq[6],freqA=0,media=0,somaFreq=0;
    for (int i=0; i<6; i++)
    {
        printf("Informe a frequência cardíaca %d:\n", i+1);
        scanf("%d",&freq[i]);

        somaFreq = somaFreq + freq[i];

        if (freq[i]>100)
        {
            freqA = freqA+1;
        }
    }
    media = somaFreq/6;

    printf("\nA média das frequências cardíacas ficou em: %dbpm\n",media);
    printf("\nA quantidade de pessoas com frequência cardíaca acima de 100bpm ficou em: %d\n",freqA);
    return 0;
}

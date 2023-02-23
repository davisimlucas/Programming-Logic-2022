#include <stdio.h>


int main()
{
    int N, nMenores;
    double soma, media, percentualMenores;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);
    char nomes[N][50];
    int idades[N];
    double alturas[N];
    for (int i = 0; i < N; i++){
        printf("Dados da %dº pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Alturas: ");
        scanf("%d", &alturas[i]);
    }
    soma = 0;
    for(int i = 0; i < N; i++){
        soma = soma + alturas[i];
    }
    media = soma / N;
    printf("Altura media: %.2lf\n", media);
    nMenores = 0;
    for(int i = 0; i < N; i++){
        if(idades[i] < 16){
            nMenores = nMenores + 1;
        }
    }
    percentualMenores = (double)nMenores * 100 / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);

    return 0;

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaFinal;

    printf("Nota da primeira prova: \n");
    scanf("%lf", &nota1);
    printf("Nota da segunda prova: \n");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    printf("Nota final = %.1lf\n", notaFinal);

    if (notaFinal < 60.0){
        printf("Reprovado\n");
    }
    return 0;
}

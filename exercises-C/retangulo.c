#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do ret�ngulo: ");
    scanf("%lf,", &base);

    printf("Altura do ret�ngulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 *(base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("Area = %.4lf\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diaginal = %.4lf\n", diagonal);

    return 0;
}

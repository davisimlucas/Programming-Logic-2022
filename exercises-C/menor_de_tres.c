#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, menor;

    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);
    printf("Digite c: ");
    scanf("%d", &c);

    if ( a < b && a < c){
        menor = a;
    }
    else if (b < c){
        menor = b;
    }
    else {
        menor = c;
    }

    printf("O menor dos tres numeros eh %d\n", menor);
    return 0;
}

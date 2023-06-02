#include <stdio.h>
#include <math.h>

int main()
{
    int n1, res;

    printf("Informe um numero: \n");
    scanf("%d", &n1);

    if (n1 > 0)
    {
        res = sqrt(n1);
        printf("Este e o valor da raiz quadrada: %d\n", res);
    }
    else
    {
        res = pow(n1, 2);
        printf("Este e o valor do numero elevado ao quadrado: %d \n", res);
    }

    return 0;
}
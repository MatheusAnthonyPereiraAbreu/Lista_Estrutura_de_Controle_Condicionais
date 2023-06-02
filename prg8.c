#include <stdio.h>

int main()
{
    int n1;

    printf("informe aqui um valor inteiro: \n");
    scanf("%d", &n1);

    if (n1 % 11 == 0)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}
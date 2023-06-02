#include <stdio.h>

int main()
{
    int est;
    float prod, res;

    printf("Informe aqui o preço do produto, e tambem o seu estado, utilize, 1=MG; 2=SP;3=RJ;4=ES \n");
    scanf("%f %d", &prod, &est);

    if (est == 1)
    {
        res = (prod * 0.12) + prod;
        printf("%f", res);
    }
    else if (est == 2)
    {
        res = (prod * 0.07) + prod;
        printf("%f", res);
    }
    else if (est == 3)
    {
        res = (prod * 0.15) + prod;
        printf("%f", res);
    }
    else if (est == 4)
    {
        res = (prod * 0.08) + prod;
        printf("%f", res);
    }
    else
    {
        printf("Estado invalido.");
    }

    return 0;
}
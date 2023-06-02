#include <stdio.h>

int main()
{
    float altura;
    char sex;

    printf("Informe aqui sua altura e seu sexo, m para masculino e f para feminino: \n");
    scanf("%f %c", &altura, &sex);

    if (sex == 'm' && 1.0 * altura >= 1.75)
    {
        printf("sim");
    }
    else if (sex == 'f' && 1.0 * altura >= 1.80)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}
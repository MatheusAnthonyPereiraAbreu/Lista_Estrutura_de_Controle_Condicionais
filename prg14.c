#include <stdio.h>
int main()
{
    float h, res;
    char sex;

    printf("Coloque aqui sua altura e seu sexo, m para masculino, f para feminino: \n");
    scanf("%f %c", &h, &sex);

    if (sex == 'm')
    {
        res = (72.7 * h) - 58;

        printf("%f", res);
    }
    else
    {
        res = (62.1 * h) - 44.7;
        printf("%f", res);
    }

    return 0;
}
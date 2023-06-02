#include <stdio.h>

int main()
{
    int idade, anos;

    printf("Coloque aqui a sua idade e seus anos trabalhados: \n");
    scanf("%d %d", &idade, &anos);

    if (idade >= 65 || anos >= 30 || (idade >= 60 && anos >= 25))
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}
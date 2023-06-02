#include <stdio.h>

int main()
{
    float sal, emp;

    printf("Informe o valor do seu salario, e depois o valor do emprestimo: \n");
    scanf("%f %f", &sal, &emp);

    if (emp >= 0.2 * sal)
    {
        printf("emprestimo nao concedido");
    }
    else
    {
        printf("emprestimo concedido");
    }

    return 0;
}
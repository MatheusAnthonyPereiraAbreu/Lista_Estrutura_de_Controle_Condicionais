#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Informe 2 numeros inteiros: \n");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2)
    {
        printf("Este numero e o menor: %d\n", n1);
    }
    else
    {
        printf("Este numero e o menor: %d\n", n2);
    }
    return 0;
}
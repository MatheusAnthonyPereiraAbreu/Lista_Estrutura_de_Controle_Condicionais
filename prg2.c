#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("Informe 4 numeros inteiros: \n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 < n2 && n1 < n3 && n1 < n4)
    {
        printf("Este numero e o menor: %d \n", n1);
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4)
    {
        printf("Este numero e o menor: %d\n", n2);
    }
    else if (n3 < n1 && n3 < n2 && n3 < n4)
    {
        printf("Este numero e o menor: %d\n", n3);
    }
    else
    {
        printf("Este numero e o menor: %d\n", n4);
    }

    return 0;
}
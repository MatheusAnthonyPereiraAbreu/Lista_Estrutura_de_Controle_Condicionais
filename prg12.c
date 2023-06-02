#include <stdio.h>

int main()
{
    double a, b, c;

    printf("Informe aqui a, b e c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a != b && a != c && b != c)
    {
        printf("escaleno");
    }
    else if (a == b && a==c && b==c )
    {
        printf("equilatero");
    }
    else
    {
        printf("isosceles");
    }

    return 0;
}
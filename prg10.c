#include <stdio.h>
#include <math.h>
int main()
{
    double x1, x2, a, b, c, delta;

    //printf("Coloque aqui o valor de a , b e c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = 1.0 * pow(b, 2) - 4 * a * c;

    if (delta<0)
            {
                printf("sem raizes reais");
            }
    else if (delta >= 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > 0 && x2 > 0)
        {
            if (x1 > x2)
            {
                printf("%lf %lf", x2, x1);
            }
            else if (x2 > x1)
            {
                printf("%lf %lf", x1, x2);
            }
            else if (x1 == x2)
            {
                printf("%lf", x2);
            }
        }
            

        return 0;
    }
}
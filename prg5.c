#include <stdio.h>

int main()
{
    float n1,n2,med;

    printf("Coloque aqui as suas 2 notas: ");
    scanf(" %f %f", &n1, &n2);

    if (n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10)
    {
        med = (n1 + n2) / 2;
        printf("Sua media e : %.1f", med);
    }
    else
    {
        printf("notas incorretas");
    }
    return 0;
}
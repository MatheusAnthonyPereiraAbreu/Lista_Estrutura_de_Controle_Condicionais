#include <stdio.h>

int main()
{
    float dim, alt, lar, prof;

    //printf("Informe aqui o diamentro da bola de boliche: \n");
    scanf("%f", &dim);
    //printf("Informe aqui a altura, largura e profundidade respectivamente da caixa: \n");
    scanf("%f %f %f", &alt, &lar, &prof);

    if (dim<alt&&dim<lar&&dim<prof)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}

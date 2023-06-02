#include<stdio.h>
int main()
{
    int n1;

    printf("Coloque um numero: \n");
    scanf("%d", &n1);

    if ((n1%3)==0 && (n1%5)==0)
    {
        printf("nao divisivel");
    } else if ((n1%3==0))
    {
        printf("divisivel por 3");
    } else
    {
        printf("divisivel por 5");
    }
    
    
    return 0;
}
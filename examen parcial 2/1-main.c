#include <stdio.h>

int main()
{
    int N;
    int i;
    int j;
    printf("Ingrese el numero de columnas:\n");
    scanf("%d", &N);

    for(i=1; i<=N+1; i++)
    
        
        

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }

        for(j=(2*i-2); j<(2*N-3); j++)
        {
            printf("*");
        }

        for(j=1; j<=i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
    return (0);
}
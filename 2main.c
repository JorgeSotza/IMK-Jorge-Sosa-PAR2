#include <stdio.h>

int main()
{
    int i;
    int j;
    int n;

    printf("Cuantas lineas quieres? ");
    scanf("%d", &n);

    printf("\n");

    for(i=1; i<=n; i++)
    {
       
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

       
        for(j=1; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("inserisci lunghezza del lato del quadrato:\n");
        scanf("%d", &n);

    }while(n <= 0);

    printf("\n\n");

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
            printf("* ");

        printf("\n"); 
    }

    return 0;
}
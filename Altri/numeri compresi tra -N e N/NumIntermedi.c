#include <stdio.h>

int main()
{
    int n;
    int numero;

    do
    {
        printf("Inserisci il valore di n:");
        scanf("%d", &n);
        
        if(n <= 0)
            printf("Valore errato, n deve essere un numero intero positivo \n\n");

    }while(n <= 0);

    numero = -n;

    do
    {
        printf("%d,", numero);
        numero++;

    }while(numero <= n);

    printf("\nprogramma terminata\n\n");
    return 0;
}
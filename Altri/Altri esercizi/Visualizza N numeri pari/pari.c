#include <stdio.h>

int main()
{
    int n;
    int numero = 0;

    do
    {
        printf("inserisci il valore di n: ");
        scanf("%d", &n);

        if(n<= 0)
            printf("Hai inserito un valore di n non accettato, n deve essere maggiore di zero\n\n");
    }while(n <= 0);

    for(n; n>0; n--)
    {
        printf("%d,", numero);
        numero = numero + 2;
    }

    printf("\n\nprogramma terminata\n");

    return 0;
}
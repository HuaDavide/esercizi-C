#include <stdio.h>

int main()
{
    int n1, n2;

    do
    {
        printf("Inserisci il valore di n1: ");
        scanf("%d", &n1);
        printf("\n\n inserisci il valore di n2: ");
        scanf("%d", &n2);

        if(!n2 > n1)
            printf("\nnon hai inserito un numero valido, n2 deve essere maggiore di n1");
        
    }while(!n2 > n1);

    do
    {
        printf("%d,", n1 );
        n1++;

    }while(n1 <= n2);

    printf("\n\nprogramma terminata");
    
    return 0;
}
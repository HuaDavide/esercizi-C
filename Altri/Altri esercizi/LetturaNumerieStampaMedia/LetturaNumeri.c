#include <stdio.h>


int main()
{
    double numeri[200];
    double numero;
    double media;
    double sommaNumero = 0;
    int numNumero = 0;

    do
    {
        printf("Inserisci un numero intero: \n");
        scanf("%lf",&numero);
        sommaNumero += numero;
        numNumero++;
    }while(numero != 0);

    
    media = sommaNumero / numNumero;
    printf("La media dei numeri è uguale a: %f\n\n", media);

    printf("I numeri inseriti maggiore della media sono:\n");

    for (int i = 0; i < 10; i++)
    {
        
            printf("%f\n",numeri[i]);
    }
        
    

    return 0;
}
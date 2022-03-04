#include <stdio.h>
#include <limits.h>

int main()
{
	int a; 
    int b;
    int c;
    int minimo;
    int massimo = 0;

	do
	{
		printf("inserisci il valore di a\n");
		scanf("%d", &a);
		printf("inserisci il valore di b\n");
		scanf("%d", &b);
		printf("inserisci il valore di c\n");
		scanf("%d", &c);

		if (a < b && b < c)
		{

			if (a < minimo)
				minimo = a;
			if (c > massimo)
				massimo = c;
		}
		else
			printf("hai inserito una serie di numeri non validi\n");
		

	} while (a >= 0 && b >= 0 && c >= 0);

	printf("il numero massimo è uguale a: %d\n", massimo);
	printf("il numero minimo è uguale a: %d", minimo);

	return 0;
}
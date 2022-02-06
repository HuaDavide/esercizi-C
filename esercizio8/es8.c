#include <stdio.h>
#include <math.h>

int main()
{

	int a = 0;
	double somma = 0;

	while (a >= 0)
	{
		printf("inserisci un numero maggiore o uguale di 0\n");
		scanf("%d", &a);

		if (a >= 0)
			somma = somma + sqrt(a);
		else
			printf("numero errato\n");
	}

	printf("la somma è uguale a: %f", somma);

	return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{

	int a, b;
	double r;

	do
	{
		printf("inserisci il valore di a: ");
		scanf("%d", &a);
		printf("inserisci il valore di b: ");
		scanf("%d", &b);

		if (a < b)
			r = b / a;
		else
			r = a / b;

		if (r > 0)
		{
			r = sqrt(r);
			printf("rsdice quadrata è uguale a: %f\n", r);
		}
	} while (r > 0);

	printf("Hai inserito un numero che non può essere calcolato");

	return 0;
}
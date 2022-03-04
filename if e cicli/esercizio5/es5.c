#include <stdio.h>

int main()
{
	int a, b, c;
    int differenza = 0; 
    int nulli = 0;
    int pari = 0;
    int dispari = 0;
	do
	{
		printf("inserisci il valore di a: ");
		scanf("%d", &a);
		printf("inserisci il valore di b: ");
		scanf("%d", &b);
		printf("inserisci il valore di c: ");
		scanf("%d", &c);

		differenza = a - b;

		if (differenza == 0)
			nulli++;

		if (differenza % 2 == 0)
			pari++;
		else
			dispari++;

	} while (a + b >= c);

	printf("\nnulli: %d\n", nulli);
	printf("pari: %d\n", pari);
	printf("dispari: %d\n", dispari);

	return 0;
}
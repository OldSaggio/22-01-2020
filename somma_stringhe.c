#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string.h>

int stringaNumero(const char* s)
{
	int dim = strlen(s);
	int ris = 0;
	size_t count = 0;

	for (int i = dim-1; i >= 0; i--)
	{
		ris += (s[i] - '0') *pow(10, count);
		count++;
	}

	return ris;
}

int lunghezzaNumero(int n)
{
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		count++;

	}

	return count;
}

char* numeroStringa(int n)
{
	char* ris = malloc(lunghezzaNumero(n) + 1);
	ris[lunghezzaNumero(n)] = '\0';

	for (int i = lunghezzaNumero(n) - 1; i >= 0; i--)
	{
		ris[i] = n % 10 + '0';
		n /= 10;
	}

	return ris;
}

char* somma_stringhe(const char* a, const char* b)
{
	if (a != NULL && b != NULL)
	{

		int n1 = stringaNumero(a);
		int n2 = stringaNumero(b);

		int somma = n1 + n2;

		return numeroStringa(somma);
	}

	return NULL;


}
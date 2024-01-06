#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

void stampa_a(uint8_t n)
{
	if (n % 2 != 0 && n > 3)
	{
		short meta = (n / 2) + 1;
		uint8_t val = n;

		size_t count = 0;
		size_t spazi = 0;

		while (count < n)
		{
			for (size_t i = 0; i < (size_t)val - 1; i++)
			{
				fprintf(stdout, " ");
			}

			fprintf(stdout, "/");

			if (count != 0)
			{
				for (size_t i = 0; i < spazi; i++)
					if (val == meta)
						fprintf(stdout, "-");
					else
						fprintf(stdout, " ");
			}

			fprintf(stdout, "\\");
			fprintf(stdout, "\n");

			count++;
			val--;
			spazi += 2;
		}
	}
	else
		printf("%s", "Hai inserito un numero pari oppure minore di 3.");
}
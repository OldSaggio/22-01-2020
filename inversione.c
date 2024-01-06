#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void changeUpperLower(char* s)
{
	for (size_t i = 0; i < strlen(s); i++)
		if (islower(s[i]))
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);
}

bool inverti_case(const char* nomefilein, const char* nomefileout)
{
	if (nomefilein == NULL || nomefileout == NULL)
		return false;

	FILE* input = fopen(nomefilein, "r");

	if (input == NULL)
		return false;

	size_t dim = 1;
	char* in = malloc(1);
	char c;

	while (fscanf(input, "%c", &c) == 1)
	{
		in[dim - 1] = c;
		dim++;
		in = realloc(in, dim+1);
		
	}

	in[dim - 1] = '\0';

	fclose(input);

	FILE* output = fopen(nomefileout, "w");

	if (output == NULL)
		return false;

	changeUpperLower(in);
	
	fprintf(output, "%s", in);

	free(in);

	fclose(output);

	return true;

}
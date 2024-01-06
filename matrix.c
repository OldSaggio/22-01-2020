#include "matrix.h"

struct matrix* mat_delete_col(const struct matrix* m, size_t i)
{
	if (m == NULL)
		return NULL;

	if (i < m->cols && m->cols > 1)
	{
		size_t rows = m->rows;
		size_t cols = m->cols;

		double* data = malloc(sizeof(double) * rows * cols);
		size_t count = 0;

		struct matrix* ris = malloc(sizeof(struct matrix));

		for (size_t r = 0; r < rows; r++)
			for (size_t c = 0; c < cols; c++)
			{
				if (c != i)
				{
					data[count] = m->data[r * cols + c];
					count++;
				}
			}

		ris->rows = rows;
		ris->cols = cols - 1;
		ris->data = data;

		return ris;
	}

	return NULL;
}
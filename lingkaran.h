#ifndef LINGKARAN_H
#define LINGKARAN_H
#include "matrix.h"

typedef struct
{
	int x,
	int y,
	int r
} lingkaran;

void gambarLingkaran(lingkaran* L, matrix* M, char c);

#endif

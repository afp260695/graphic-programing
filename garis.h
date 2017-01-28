#ifndef GARIS_H
#define GARIS_H
#include "matrix.h"

typedef struct
{
	int x,
	int y
} garis;

void gambarGaris(garis* G, matrix* M, char c);

#endif

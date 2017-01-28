#ifndef GARIS_H
#define GARIS_H
#include "matrix.h"

typedef struct
{
	int x1, y1;
	int x2, y2;
} garis;

void gambarGaris(garis* G, matrix* M, char c);

#endif

#ifndef OBJECT_H
#define OBJECT_H
#include "garis.h"

typedef struct
{
	garis *G;
	lingkaran *L
} object;

void moveXY(object* O, int x, int y);
void moveVertical(object* O, int y);
void moveHorizontal(object* O, int x);
void gambarObject(Object* O, matrix* M, char c)

#endif

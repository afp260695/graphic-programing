#ifndef OBJECT_H
#define OBJECT_H
#include "garis.h"

typedef struct 
{
	garis *G;
} object;

void moveXY(object* O, matrix* M, int x, int y);
void moveVertical(object* O, matrix* M, int y);
void moveHorizontal(object* O, matrix* M, int x);

#endif
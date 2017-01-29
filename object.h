#ifndef OBJECT_H
#define OBJECT_H
#include "point.h"
#include "matrix.h"

typedef struct
{
	Point pointInit;
	Point P[30];
	int size;
} Object;

void setXYObject(Object* O, int x, int y);
void moveVertical(Object* O, int y);
void moveHorizontal(Object* O, int x);
void gambarObject(Object O, Matrix* M, char c);
Object makePeluru();
Object makePesawat(int xinit, int yinit);
#endif

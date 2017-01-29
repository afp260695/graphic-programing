#include "object.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void setXYObject(Object* O, int x, int y) {
	O->pointInit.x = x;
	O->pointInit.y = y;
}

void moveVertical(Object* O, int y) {
	O->pointInit.y = O->pointInit.y + y;
}

void moveHorizontal(Object* O, int x) {
	O->pointInit.x = O->pointInit.x + x;
}

void gambarObject(Object O, Matrix* M, char c) {
	Point start, finish;
	for(int i = 0;i < O.size-1 ;i++) {
		setXY(&start, O.P[i].x + O.pointInit.x, O.P[i].y + O.pointInit.y);
		setXY(&finish, O.P[i+1].x + O.pointInit.x, O.P[i+1].y + O.pointInit.y);
		gambarGaris(start, finish, M, c);
	}

	setXY(&start, O.P[O.size - 1].x + O.pointInit.x, O.P[O.size - 1].y + O.pointInit.y);
	setXY(&finish, O.P[0].x + O.pointInit.x, O.P[0].y + O.pointInit.y);
	gambarGaris(start, finish, M, c);
}

Object makePeluru(int xinit, int yinit) {
	int x[6] = {2, 6, 6, -6, -6, -2};
	int y[6] = {0, 8, 24, 24, 8, 0};
	Object O;
	for(int i = 0;i < 6;i++) {
		O.P[i].x = x[i];
		O.P[i].y = y[i];
	}

	O.pointInit.x = xinit;
	O.pointInit.y = yinit;
	O.size = 6;
	return O;
}

Object makePesawat(int xinit, int yinit) {
	int x[22] = {0, 16, 81, 125, 134, 110, 112, 154, 167, 176, 169, 169, 176, 167, 154, 112, 110, 134, 125, 81, 16, 0};
	int y[22] = {3, 11, 11, 57, 57, 21, 11, 9, 28, 28, 11, -11, -28, -28, -9, -11, -21, -57, -57, -11, -11, -3};
	Object O;
	for(int i = 0;i < 22;i++) {
		O.P[i].x = x[i];
		O.P[i].y = y[i];
	}

	O.pointInit.x = xinit;
	O.pointInit.y = yinit;
	O.size = 22;
	return O;
}

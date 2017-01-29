// #include "garis.h"
#include "lingkaran.h"
#include "matrix.h"
#include "point.h"
#include "object.h"

int main(){
	Matrix M;
	// Point P1, P2;
	// Lingkaran L;
	char c, c1;
	c = 1;
	c1 = 2;
	initMatrix(&M, 178, 200);
	resetMatrix(&M);
	
	Object peluru = makePeluru(25,25);
	Object pesawat = makePesawat(0,100);
	// setXY(&P1,5,10);
	// setXY(&P2,5,10);
	// gambarGaris(P1, P2, &M, c);
	// L.x = 8;
	// L.y = 2;
	// L.r = 5;
	// gambarLingkaran(&L, &M, c1);
	gambarObject(peluru, &M, c);
	printMatrix(M);

	return 0;
}
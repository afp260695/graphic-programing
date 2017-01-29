// #include "garis.h"
#include "lingkaran.h"
#include "matrix.h"
#include "point.h"
#include "object.h"
#include <stdio.h>

int main(){
	Matrix M;
	Point P1, P2;
	Lingkaran L;
	char c, c1;
	c = '1';
	c1 = '2';
	initMatrix(&M, 178, 200);
	resetMatrix(&M);

	Object peluru = makePeluru(25,25);
	Object pesawat = makePesawat(0,100);
	//setXY(&P1,0,10);
	//setXY(&P2,10,10);
	//gambarGaris(P1, P2, &M, c);

	gambarObject(peluru, &M, c);

	L.x = 10;
	L.y = 15;
	L.r = 20;
	gambarLingkaran(&L, &M, c1);

	printMatrix(M);
    if (isObjectCollide(peluru, &M, c) == 1) {
        printf("Object bertabrakan\n");
    } else {
        printf("Object tidak bertabrakan\n");
    }
	return 0;
}

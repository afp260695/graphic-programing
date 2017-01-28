#ifndef LINGKARAN_H
#define LINGKARAN_H
#include "matrix.h"

typedef struct
{
	int x, y, r;
} lingkaran;

//Menggambar lingkaran pada matriks
void gambarLingkaran(lingkaran* L, matrix* M, char c);

//Memeriksa apakah semua bagian lingkaran pada L pada matriks M berisi karakter c
//Mengembalikan 0 jika semuanya berisi karakter c
//Mengembalikan 1 jika ada bagian yang tertimpa karakter lain
int isLingkaranPutus(lingkaran* L, matrix* M, char c);


#endif

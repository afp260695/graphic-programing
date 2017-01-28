#include "lingkaran.h"
#include "matrix.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void gambarLingkaran(lingkaran* L, matrix* M, char c) {
    if (sizeof(L) != 0){
        if ((sizeof(M -> xsize)) != 0) {
            if (sizeof(M -> ysize != 0)) {
                    int x = L->x;
                    int y = L->y + L->r;
                    int err = 0;
                    while (x - L->x <= y - L->y) {
                        int dx = x - L->x;
                        int dy = y - L->y;
                        if (L->x + dx >= 0 && L->x + dx < M->xsize && L->y + dy >= 0 && L->y + dy < M->ysize) {
                            M -> M[L->x + dx][L->y + dy] = c;
                        }
                        if (L->x - dx >= 0 && L->x - dx < M->xsize && L->y + dy >= 0 && L->y + dy < M->ysize) {
                            M -> M[L->x - dx][L->y + dy] = c;
                        }
                        if (L->x + dx >= 0 && L->x + dx < M->xsize && L->y - dy >= 0 && L->y - dy < M->ysize) {
                            M -> M[L->x + dx][L->y - dy] = c;
                        }
                        if (L->x - dx >= 0 && L->x - dx < M->xsize && L->y - dy >= 0 && L->y - dy < M->ysize) {
                            M -> M[L->x - dx][L->y - dy] = c;
                        }
                        if (L->x + dy >= 0 && L->x + dy < M->xsize && L->y + dx >= 0 && L->y + dx < M->ysize) {
                            M -> M[L->x + dy][L->y + dx] = c;
                        }
                        if (L->x - dy >= 0 && L->x - dy < M->xsize && L->y + dx >= 0 && L->y + dx < M->ysize) {
                            M -> M[L->x - dy][L->y + dx] = c;
                        }
                        if (L->x + dy >= 0 && L->x + dy < M->xsize && L->y - dx >= 0 && L->y - dx < M->ysize) {
                            M -> M[L->x + dy][L->y - dx] = c;
                        }
                        if (L->x - dy >= 0 && L->x - dy < M->xsize && L->y - dx >= 0 && L->y - dx < M->ysize) {
                            M -> M[L->x - dy][L->y - dx] = c;
                        }

                        if (err <= 0)
                        {
                            dx += 1;
                            err += 2*dx + 1;
                        }
                        if (err > 0)
                        {
                            dy -= 1;
                            err -= 2*dy + 1;
                        }

                        x = L->x + dx;
                        y = L->y + dy;
                }
            }
        }
    }
}

int main() {

    matrix M;
    M.M = malloc(50*sizeof(char*));
    int i, j;
    for (i = 0; i < 50; i++) {
        M.M[i] = malloc(50*sizeof(char));
    }
    M.xsize = 50;
    M.ysize = 50;

    for (i = 0; i < 50; i++) {
        for (j = 0; j< 50; j++) {
            M.M[i][j] = '.';
        }
    }

    lingkaran L;

    L.x = 10;
    L.y = 15;
    L.r = 20;
    gambarLingkaran(&L, &M, '1');

    L.x = 30;
    L.y = 25;
    L.r = 15;
    gambarLingkaran(&L, &M, '2');

    L.x = 40;
    L.y = 15;
    L.r = 18;
    gambarLingkaran(&L, &M, '3');

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            printf("%c",M.M[j][i]);
        }
        printf("\n");
    }

    return 0;
}

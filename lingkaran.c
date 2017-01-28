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

int isLingkaranPutus(lingkaran* L, matrix* M, char c) {
    int ret = 0;
    if (sizeof(L) != 0){
        if ((sizeof(M -> xsize)) != 0) {
            if (sizeof(M -> ysize != 0)) {
                    int x = L->x;
                    int y = L->y + L->r;
                    int err = 0;
                    while (x - L->x <= y - L->y && ret == 0) {
                        int dx = x - L->x;
                        int dy = y - L->y;
                        if (L->x + dx >= 0 && L->x + dx < M->xsize && L->y + dy >= 0 && L->y + dy < M->ysize) {
                            if (M -> M[L->x + dx][L->y + dy] != c) {
                                ret = 1;
                            };
                        }
                        if (L->x - dx >= 0 && L->x - dx < M->xsize && L->y + dy >= 0 && L->y + dy < M->ysize) {
                            if (M -> M[L->x - dx][L->y + dy] != c) {
                                ret = 1;
                            };
                        }
                        if (L->x + dx >= 0 && L->x + dx < M->xsize && L->y - dy >= 0 && L->y - dy < M->ysize) {
                            if (M -> M[L->x + dx][L->y - dy] != c) {
                                ret = 1;
                            };
                        }
                        if (L->x - dx >= 0 && L->x - dx < M->xsize && L->y - dy >= 0 && L->y - dy < M->ysize) {
                            if (M -> M[L->x - dx][L->y - dy] != c) {
                                ret = 1;
                            };
                        }
                        if (L->x + dy >= 0 && L->x + dy < M->xsize && L->y + dx >= 0 && L->y + dx < M->ysize) {
                            if (M -> M[L->x + dy][L->y + dx] != c) {
                                ret = 1;
                            };
                        }
                        if (L->x - dy >= 0 && L->x - dy < M->xsize && L->y + dx >= 0 && L->y + dx < M->ysize) {
                            if (M -> M[L->x - dy][L->y + dx] != c) {
                                ret = 1;
                            };
                        }
                        if (L->x + dy >= 0 && L->x + dy < M->xsize && L->y - dx >= 0 && L->y - dx < M->ysize) {
                            if (M -> M[L->x + dy][L->y - dx] != c) {
                                ret = 1;
                            };
                        }
                        if (L->x - dy >= 0 && L->x - dy < M->xsize && L->y - dx >= 0 && L->y - dx < M->ysize) {
                            if (M -> M[L->x - dy][L->y - dx] != c) {
                                ret = 1;
                            };
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
    return ret;
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

    lingkaran L1, L2, L3, L4;

    L1.x = 10;
    L1.y = 15;
    L1.r = 20;
    gambarLingkaran(&L1, &M, '1');

    L2.x = 30;
    L2.y = 25;
    L2.r = 15;
    gambarLingkaran(&L2, &M, '2');

    L3.x = 40;
    L3.y = 15;
    L3.r = 18;
    gambarLingkaran(&L3, &M, '3');

    L4.x = 5;
    L4.y = 5;
    L4.r = 5;
    gambarLingkaran(&L4, &M, '4');

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            printf("%c",M.M[j][i]);
        }
        printf("\n");
    }

    if (isLingkaranPutus(&L1, &M, '1') == 1) {
        printf("Lingkaran 1 terputus\n");
    } else {
        printf("Lingkaran 1 tidak terputus\n");
    }

    if (isLingkaranPutus(&L2, &M, '2') == 1) {
        printf("Lingkaran 2 terputus\n");
    } else {
        printf("Lingkaran 2 tidak terputus\n");
    }

    if (isLingkaranPutus(&L3, &M, '3') == 1) {
        printf("Lingkaran 3 terputus\n");
    } else {
        printf("Lingkaran 3 tidak terputus\n");
    }

    if (isLingkaranPutus(&L4, &M, '4') == 1) {
        printf("Lingkaran 4 terputus\n");
    } else {
        printf("Lingkaran 4 tidak terputus\n");
    }

    return 0;
}

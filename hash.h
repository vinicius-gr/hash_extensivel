#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N_INICIAL 4

typedef struct
{
    int depth;
    int key;
}pagina;

typedef struct
{
    int global_depth;
    pagina *header;
}diretorio;

diretorio *diretorio_hash;

//======================================================//

int function_hash (int k);
pagina *hsearch (int k);
int hinsert (int *k);

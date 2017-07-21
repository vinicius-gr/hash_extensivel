#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{

}bucket;

typedef struct
{
    bucket *buque;
    int global_depth;
}index;

index index_hash;

//===========================================//

int funcao_hash (int k);
index *hsearch (int k);
int hinsert (int *k);

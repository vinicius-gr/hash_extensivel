#include "hash.h"

void inicializa_diretorio ()
{
    diretorio_hash = (diretorio*) malloc(N_INICIAL * sizeof(diretorio));

    int i,j;

    for(i=0; i<N_INICIAL; i++)
    {
        diretorio_hash[i].global_depth = (int) log2(N_INICIAL);

        diretorio_hash[i].header = (pagina*) malloc(N_INICIAL * sizeof(pagina));

        for(j=0; j<N_INICIAL; j++)
        {
            diretorio_hash[i].header[j].depth = diretorio_hash[i].global_depth;
            diretorio_hash[i].header[j].key = -1;
        }
    }
}

#include "hash.h"

int function_hash (int k)
{
    return (k & diretorio_hash[0].global_depth);
}

int verifica_espaco_bucket(pagina *header)
{
    int i;
    for(i=0; i<N_INICIAL; i++)
    {
        if(header[i].key == -1)
            return 1;
    }
    return 0;
}

int insere_no_bucket (pagina *p, int k)
{
    int i;
    for(i=0; i<N_INICIAL; i++)
    {
        if(header[i].key == -1)
        {
            header[i].key == k;
            return 1;
        }
    }
    return 0;
}

int hinsert (int k)
{
    int n = diretorio_hash[0].global_depth;
    pagina *b = hsearch(k);

    if (verifica_espaco_bucket(b) == 1)
    {
        insere_no_bucket(b, k);
        return n;
    }

    else
    {

        for()
        {
            if()
            {

            }
        }
        if
        {

        }
    }
}

pagina *hsearch (int k)
{
    int n = diretorio_hash[0].global_depth;
    int b = (function_hash(k) & ((int) (pow(2, n) - 1)));

    return diretorio_hash[b].header;
}


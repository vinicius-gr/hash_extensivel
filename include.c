#include "hash.h"

int funcao_hash (int k)
{
    return (k % index_hash.global_depth);
}

index *hsearch (int k)
{
    int n = index_hash.global_depth;
    int b = (funcao_hash(k) & (pow(2,n) - 1));

    return index_hash.buque[b];
}

int hinsert (int *k)
{
   int n = index_hash.global_depth;
   int b = hsearch(&k);

   if ()
   {
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

       if()
       {

       }
   }

   return n;
}

#include "lists.h"
#include <stdlib.h>

int invierte_numero(int numero) {
    int numero_invertido = 0;
    while (numero > 0) {
        int digito = numero % 10;
        numero_invertido *= 10;
        numero_invertido += digito;
        numero /= 10;
    }
    return numero_invertido;
} 

int main()
{
    int a = 999, b = 999, t, invt;
    
    while (a > 900)
    {
        while (b > 900)
        {   
            t = (a * b);
            invt = invierte_numero(t);
            if (t == invt)
            {
                printf("%d\n", t);
                return (0);
            }
            b--;
        }
        b = 999;
        a--;
    }
    return (0);
}

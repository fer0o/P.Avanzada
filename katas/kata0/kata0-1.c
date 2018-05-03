#include <stdio.h>
#include <stdlib.h>

int *arre(int *pvalor, int tamarr, int target)
{
    int a, b;
    int *result = (int *)malloc(sizeof(int));
    for (a = 0; a < tamarr - 1; a++)
    {
        for (b = a + 1; b < tamarr; b++)
        {
            if (pvalor[a] + pvalor[b] == target)
            {
                result[0] = a;
                result[1] = b;
                return result;
            }
        }
    }
    return NULL;
}
int main()
{
    int arreglo[] = {1, 7, 13, 15, 23, 44, 12};
    int target = 30, num_size = 7;
    int *result = arre(arreglo, num_size, target);
    //suma del arreglo
    if (result != NULL && arreglo[result[0]] + arreglo[result[1]] == target)
    {
        printf("Si hay numeros en el arreglo que dan el numero del target:  %d\n", target);
        printf("Los numeros estan en la posicion: "
               "[%d, %d] \n",
               result[0], result[1]);
    }
    else
    {
        printf("No hay numeros para el target \n");
    }
    free(result);
    return 0;
}

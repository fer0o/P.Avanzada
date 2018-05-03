#include <stdio.h>
#include <stdlib.h>

int *anagramMap(int *a, int arr1, int *b, int arr2, int *pos)
{

    int *posi = (int *)malloc(sizeof(int) * arr1);
    for (int i = 0; i < arr1; i++)
    {
        for (int j = 0; j < arr2; j++)
        {
            if (a[i] == b[j])
            {
                posi[i] = j;
            }
        }
    }
    *pos = arr1;
    return posi;
}

int main()
{

    int A[] = {12, 28, 46, 32, 50};
    int B[] = {50, 12, 32, 46, 28};
    int r;
    int *res = anagramMap(A, 5, B, 5, & r);

    for (int i = 0; i < 5; i++)
    {
        printf("los valores del arreglo estan en esta posicion: ");
        printf("%d \n", res[i]);
    }
    return (res);
}

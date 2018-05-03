#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Teclee el numero de la secuencia fiboanacci:");
    scanf("%d", &number); //escanea el valor introducido
    printf("los valores iniciales son: %d %d", n1, n2);
    for (i = 1; i <= number; ++i)
    {
        printf(" la suma de los valores hasta el target");
        n3 = n1 + n2;
        printf(" %d \n", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
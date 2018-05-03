//parcial 2 Programación avanzada
/* para este programa tendremos que revisar los trings de ambos casos del pasiente como del virus para poder determinar si en los substring las letras coinciden en el determinado orden
para eso es necesario revisar primero que la cadena del paciente no sea menor a la cadena del virus, si no desde ahí estaría dando error, 
luego yo haría 2 variables en las que se estariían almacenando los datos para revisar las coincidencias del string y un una forma de validarlo con un true o false en caso de de detectar errores en los strings
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void Encontrar(char *paciente, char *virus)
{
    int pacLen = strlen(paciente);
    int virLen = strlen(virus);

    if (pacLen < virLen)
    {
        return;
    }

    // necessitamos verificar si se encuentra un virus validando con lectura de los strings del paciente y virus
    bool hayError = false;
    bool coincide = true;
    //valores de validación
    int i, j;

    for (i = 0; i < pacLen - virLen + 1; i++)
    {
        hayError = false;
        coincide = true;
    }

    for (j = 0; j < virLen; j++)
    {
        if (paciente[i + j] != virus[j])
        {
            if (hayError)
            {
                coincide = false;
                break;
            }
            else
            {
                hayError = true;
            }
        }
        if (coincide)
        {
            printf("\n", i);
        }
    }
    printf("\n");
}
int main()
{
    int i, n;
    char paciente[100001], virus[100001];

    scanf("%numero de pacientes", n);
    for (i = 0; i < n; i++)
    {
        scanf("pacientes", paciente);
        scanf("virus\n", virus);

        Encontrar(paciente, virus);
    }
}
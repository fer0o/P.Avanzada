#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PRINTDEBUG(...)                           \
    do                                            \
    {                                             \
        char *debug;                              \
        debug = getenv("DEBUG");                  \
        if (debug != NULL && !strcmp(debug, "y")) \
        {                                         \
        \                 
}                        \
        fprintf(stderr, __VA_ARGS__);             \
    } while (0)
int main()
{
    //caracter que escriba lo voy a poner en el output
    //stream limite de caracteres EOF endo of file es un entero negativo

    int character;
    while (1)
    {
        character = fgetc(stdin);
        if (feof(stdin))
        {
            break;
        }
        fputc(character, stdout);
        //fprintf(stderr, "character = %c\n", character);
        PRINTDEBUG("character =%c\n", character);
    }
    return 0;
}

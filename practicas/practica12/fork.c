
#include <stdio.h>
#include <unistd.h>
int main()
{
    int pid;
    pid = fork();
    if(pid == 0)
    {
        execl("/Users/fer0o/Documents/P.Avanzada/practicas/practica12/hijo.c",
        "hijo.exe", (char *)0 );
        printf("Hola soy el hijo mundo\n");
    }
    else
    {
        printf("Hola soy el padre mundo\n");
    }

    return 0;
}
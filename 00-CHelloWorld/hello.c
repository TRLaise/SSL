#include <stdio.h>

int main(void)
{
    FILE *archivo;
    archivo = fopen("Output.txt","w");

    fprintf(archivo, "Hola mundo");
    printf ("Hola mundo");
    return 0;
}

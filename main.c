#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "funciones.h"
#include "map.h"

int main()
{

    // Se crea la lista usando los datos del TDA lista implementado
    list *lista_pokemon = list_create(lista_pokemon);

    // Se abre el archivo de mundos csv en modo lectura "r"
    FILE *fp = fopen ("pokemon_Archivo.csv", "r");

    printf("Hello world!\n");
    return 0;
}

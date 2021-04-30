#ifndef _FUNCIONES_H
#define _FUNCIONES_H


typedef struct{

    int id;
    char* nombre;
    int pc;
    int ps;
    char sexo;

}pokemon;

typedef struct{

    char* nombre;
    int existencia;
    char** tipos;
    char* previa;
    char* posterior;
    int numero_pokedex;
    char* region;

}pokedex;

/*
typedef struct{

    char* tipo_1;
    char* tipo_2;

}poketipo;
*/

const char *get_csv_field (char * tmp, int k);

#endif

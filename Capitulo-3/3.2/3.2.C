#include <stdio.h>
/**
 * Capitulo 3 Ejercicio #3.2
 * Dado un vector de enteros y su longitud, escribe una función en ensamblador
 * que recorra todos los elementos del vector y nos devuelva el valor mínimo.
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 12 Diciembre 2021
 
// Declaracion de vector
int vect []= { 13, 11, 33, 98 };

//Funcion que calcula la media del arreglo
int media(int* vector, int var)
{
    int res=0, i;
    for (i = 0; i<var; i++)
    {
        res = res+ vector[i];
    }
    res = res/var;
    return res;
}

//Funcion principal donde se imprime el resultado
int main(void)
{
    printf ("La media del arreglo es: %d \n", media(vect, 4));
    return 0;
}


#include <stdio.h>
/**
 * Capitulo 3 Ejercicio #3.1
 * Dado un vector de enteros y su longitud, escribe una función en ensamblador
 * que recorra todos los elementos del vector y nos devuelva el valor mínimo.
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 12 Diciembre 2021
 
// Declaracion de vector
int vect []= { 8, 10, - 3, 4, - 5, 50, 2, 3 };

//Funcion que calcula el minimo del arreglo
int minimo(int* v, int var)
{
    int i, min;
    min= v[0];
    for ( i= 1; i<var; i++ )
    {
        if( v[i]<min )
        {
            min= v[i]; 
        }
    }
    return min;
}

//Funcion principal donde se imprime el resultado
int main(void)
{
    printf (" %d \n", minimo(vect, 8));
    return 0;
}

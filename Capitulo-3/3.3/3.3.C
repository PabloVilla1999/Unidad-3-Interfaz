#include <stdio.h>
/**
 * Capitulo 3 Ejercicio #3.3
 * Escoge un algoritmo de ordenación de entre los 4 siguientes e impleméntalo en
 * ensamblador: Burbuja, Selección, Inserción, Quicksort.
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 12 Diciembre 2021
 
 //Declaracion del arreglo utilizado
int vect []= {8 , 10 , -3 , 4 , -5, 50 , 2, 3};

//Funcion Burbuja que ordena los numeros de manera ascendente 
void ordena ( int * v , int len )
{
    int i , j , aux ;
    for ( i= 1; i < len ; i ++ )
    {
        for ( j= 0; j < len -i ; j ++ )
        {
            if( v [j] > v [j +1] )
            {
                aux = v[ j],
                v[ j ]= v[ j +1] ,
                v[ j +1]= aux ;
            }
        }
    }
}

//Funcion principal donde se imprime el vector
int main ()
{
    int i;
    ordena ( vect , 8);
    for ( i= 0; i <8; i ++ )
    {
        printf ( " %d\n " , vect [ i ]);   
    }
}

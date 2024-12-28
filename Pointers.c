#include <stdio.h>
#include <stdlib.h>

int main(){

    //Creacion de puntero
    int a=10;
    int *p;
    p=&a;

    //Imprime la variable a la que esta direccionada
    printf("using pointer %d %d\n", *p, a);
    //Imprime la direccion a la que apunta
    printf("using pointer %p %p\n", p, &a);

    //Punteros con arreglos
    int A[5]={1,2,3,4,5};
    p=A;

    printf("Arreglo: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
     printf("\nPuntero de arreglo: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    
    //Crear una array en la memoria dinamica en el heap
     printf("\nArray en heap: \n");

    p=(int *)malloc(5*sizeof(int));

    p[0]=10; p[1]=8; p[2]=15; p[3]=4; p[4]=1;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    //Siempre que se use memoria dinámica (Memoria en heap) , se debe de liberar
    free(p);

    //Ver la cantidad que ocupan los tipos de datos
    printf("\n\nTamano de int: %zu bytes\n", sizeof(int));
    printf("Tamano de char: %zu bytes\n", sizeof(char));
    printf("Tamano de float: %zu bytes\n", sizeof(float));
    printf("Tamano de double: %zu bytes\n", sizeof(double));
    printf("Tamano de long: %zu bytes\n", sizeof(long));
    printf("Tamano de short: %zu bytes\n", sizeof(short));
    printf("Tamano de long long: %zu bytes\n", sizeof(long long));
    printf("Tamano de unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Tamano de unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("Tamano de long double: %zu bytes\n", sizeof(long double));

    return 0;
}
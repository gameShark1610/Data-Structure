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

    return 0;
}
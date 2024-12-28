#include <stdio.h>

int main(){

    //Creacion de puntero
    int a=10;
    int *p;
    p=&a;

    //Imprime la variable a la que esta direccionada
    printf("using pointer %d %d\n", *p, a);
    //Imprime la direccion a la que apunta
    printf("using pointer %p %p\n", p, &a);



    return 0;
}
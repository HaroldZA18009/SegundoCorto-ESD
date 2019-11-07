#include <stdio.h>

int main(){
    int a;
    int b;
    //Solicitando numero en a
    printf("Ingrese numero para a: ");
    scanf("%i",&a);
    //Solicitando numero en b
    printf("Ingrese numero para b: ");
    scanf("%i",&b);
    
    //Llamando funcion para realizar el cambio
    cambiar(&a,&b);

    printf("\nCambio: \n");
    
    //Mostrando cambio realizado
    printf("\nEl número de a es %i\n", a);
    printf("El número de b es %i\n", b);
    
    return 0;
}

//Cambiando numeros ingresados
void cambiar(int *puntero1, int *puntero2){
    *puntero1=*puntero1+*puntero2;
    *puntero2=*puntero1-*puntero2;
    *puntero1=*puntero1-*puntero2;
}
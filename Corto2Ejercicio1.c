#include <stdio.h>
#include <math.h>

int cambiobindeci(int deci, int numero);

int main() {
    int deci;

    //Solicitando numero binario
    printf("Ingrese numero binario: ");
    scanf("%i", &deci);

    printf("\n");

    //Mostrando cambio
    
    printf("EL Numero binario %i convertido a decimal es: %i", deci, cambiobindeci(deci, 0));
    return 0;
}

//Realizando cambio de binario a decimal

int cambiobindeci(int deci, int numero) {
    int num = numero;
    if (deci == 0) {
        return 0;
    }
    else {
        return (((deci % 10) * pow(2, num)) + cambiobindeci((deci / 10), ++num));
    }
}
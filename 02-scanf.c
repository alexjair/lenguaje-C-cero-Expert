
#include <stdio.h>


int main() {
    int precio;
    float iva;
    
    printf("Ingrese le precio \n");
    scanf("%d",&precio);
    printf("Introduce el IVA:  ");
    scanf("%f",&iva);

    printf("El precio del producto es con el IVA: %.2f",precio*(1+iva));

    return 0;
}

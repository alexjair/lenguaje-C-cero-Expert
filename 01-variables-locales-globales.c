
#include <stdio.h>

int edad = 20;

int main() {
    
    printf("Mi edad es %d años \n",edad);
    {
        int edad = 18;        
        printf("Mi edad es %d años \n",edad);
    }
    printf("Mi edad es %d años \n",edad);
    return 0;
}

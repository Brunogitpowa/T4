#include <stdio.h>
#include "calc.h"







int main(){
    int a=10;
    int b=5;

    printf("Introduce los dos operandos:");
    scanf("%d %d", &a,&b);

    printf("La suma de %d y %d es %d\n", a, b, suma(a,b));
    printf("La resta de %d y %d es %d\n", a, b, resta(a,b));
    printf("La multiplica de %d y %d es %d\n", a, b, multiplica(a,b));
    printf("La divisio de %d y %d es %d\n", a, b, divideix(a,b));
    printf("El major entre %d y %d es %d\n", a, b, major(a,b));
    
}
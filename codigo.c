#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumador(int a, int b)
{
    int suma;

    suma = a + b;

    return suma;
}

void limpia ()
{
    system ("cls");
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while(goal > clock());
}

int main()
{
int num1 = 0;
int num2 = 0;
int resultado = 0;

printf("Hola, como estas?");
delay (2000);

limpia();

printf("Porfavor ingresa 1 numero: ");
scanf("%i", &num1);

printf("\n");

printf("Ahora el segundo: ");
scanf("%i", &num2);

resultado = sumador(num1, num2);

delay(2000);

limpia();

printf("El valor de la suma es: %i", resultado);

return 0;
}
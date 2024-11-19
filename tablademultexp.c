#include <stdio.h>
#include <stdlib.h>

// Función que calcula a^b usando un bucle `for`
int exp_for(int a, int b)
{
    int resp = 1;
    int i;

    for (i = 0; i < b; i++)
    {
        resp = resp * a;
    }
    return resp;
}

// Función que calcula a^b usando un bucle `while`
int exp_while(int a, int b)
{
    int resp = 1;
    int i = 0;

    while (i < b)
    {
        resp = resp * a;
        i = i + 1;
    }
    return resp;
}

int main()
{
    int a, b, resp;

    printf("Ingrese la base (a): ");
    scanf("%d", &a);

    printf("Ingrese el exponente (b): ");
    scanf("%d", &b);

    // Cálculo con `for`
    resp = exp_for(a, b);
    printf("El resultado usando `for` es: %d\n", resp);

    // Cálculo con `while`
    resp = exp_while(a, b);
    printf("El resultado usando `while` es: %d\n", resp);

    return 0;
}

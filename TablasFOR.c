//Erick Saúl García Hernández  
Laboratorio de Programación 8 
Tablas de Multiplicar//

#include <stdio.h>
#include <stdlib.h>

void mult_for(int n) 
{
    int Resp;
    for (int i = 1; i <= 10; i++) 
    {  
        Resp = n * i;
        printf("%d * %d = %d\n", n, i, Resp);  
    }
}

int main() 
{  
    int n;
    
    printf("Ingresa el numero que multiplicaras: ");  
    scanf("%d", &n);  

    mult_for(n);
    return 0;  
}

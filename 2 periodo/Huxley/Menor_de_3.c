// https://www.thehuxley.com/problem/18

#include <stdio.h>

int main()
{
    int numero = 0, aux = 1000000000;
    
    for(int i = 0; i < 3; i++)
    {
        
        scanf("%d", &numero);
        
        if(numero < aux)
        {
            aux = numero;
        }
    }
    
    printf("%d", aux);
    return 0;
}

//https://www.thehuxley.com/problem/285

#include <stdio.h>

int main() {
    
    long int numero;
    
    scanf("%ld", &numero);
    
    if(numero == 0)
        printf("NULO");
    else
    {
        if(numero > 0)
            printf("POSITIVO ");
        else if(numero < 0)
            printf("NEGATIVO ");
            
        if(numero % 2 == 0)
            printf("PAR");
        else
            printf("IMPAR");
    }   

	return 0;
}

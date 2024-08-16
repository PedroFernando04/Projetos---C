//https://www.thehuxley.com/problem/19

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float nota = 0, aux = 0, media = 0;
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%f", &nota);
        aux += nota;
    }
    
    media = aux/3;
    
    if(media >= 7)
        printf("aprovado");
   
    else if(media < 3)
        printf("reprovado");
    
    else
        printf("prova final");
        
        
    printf("\n");
    
	return 0;
}

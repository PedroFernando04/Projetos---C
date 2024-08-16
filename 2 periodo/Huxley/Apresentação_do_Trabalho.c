//https://www.thehuxley.com/problem/288

#include <stdio.h>

int main() {
    
    int IG, IA, E, I, US, contador = 0;
    
    scanf("%d %d %d %d %d", &IG, &IA, &E, &I, &US);
    
    if(IG > 0 || IA >0)
        contador++;
    if(E > 0 && I > 0)
        contador++;
    if(US > 0)
        contador++;
        
    if(contador != 3)
        printf("%d", 0);
    else
        printf("AVALIADO");
    
	return 0;
}

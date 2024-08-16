//https://www.thehuxley.com/problem/289

#include <stdio.h>

int main() {

    int altura, idade, contador = 0;
    
    scanf("%d %d", &altura, &idade);
    
    if(altura >= 150 && idade >= 12)
        contador++;
    
    if(altura >= 140 && idade >= 14)
        contador++;
    
    if(altura >= 170 || idade >= 16)
        contador++;
        
    printf("%d", contador);
    
	return 0;
}


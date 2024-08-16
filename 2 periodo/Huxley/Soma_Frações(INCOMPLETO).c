//https://www.thehuxley.com/problem/33

#include <stdio.h>

int main() {
  
    int A, B, C, D;
    
    scanf("%d/%d + %d/%d", &A, &B, &C, &D); 
    
    if(B == 0 || D == 0)
        printf("entrada invalida!");
    else
    {
        int denominador = B * D, numerador = (A * D) + (C * B);
        
        printf("%d/%d", numerador, denominador);
    }
	return 0;
}

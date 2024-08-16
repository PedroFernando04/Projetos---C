//https://www.thehuxley.com/problem/43

#include <stdio.h>

int main()
{
    char array[5];
    int numero = 0;
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &numero);
        array[i] = numero;
    }
    
    if(array[0] == array[1] && array[1] == array[2])
    {
        printf("%d", 1);
    }
    
    else if(array[0] != array[1] && array[0] != array[2] && array[1] != array[2])
    {
        printf("%d", 2);
    }
    
    else
        printf("%d", 3);
    return 0;
}

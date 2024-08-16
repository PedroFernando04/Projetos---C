//https://www.thehuxley.com/problem/51

#include <stdio.h>

int main()
{
    float array[] = {5.3, 6, 3.2, 2.5};
    int codigo = 0, quantidade = 0;
    
    scanf("%d", &codigo);
    scanf("%d", &quantidade);
    
    float total = array[codigo - 1] * quantidade;
    
    if(quantidade >= 15 || total >= 40)
        printf("R$ %.2f", total * 0.85);
    
    else
        printf("R$ %.2f", total);
    
    return 0;
}

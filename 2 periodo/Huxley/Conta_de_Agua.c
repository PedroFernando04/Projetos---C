//https://www.thehuxley.com/problem/174

#include <stdio.h>

int main()
{
    int quantidade = 0, conta = 0, resto = 0;
    
    scanf("%d", &quantidade);
    
    while (1)
    {
        if (quantidade >= 101)
        {
            resto = quantidade - 100;
            conta += resto * 5;
            quantidade -= resto;
        }
        
        else if (quantidade >= 31)
        {
            resto = quantidade - 30;
            conta += resto *2;
            quantidade -= resto;
        }
        
        else if (quantidade >= 11)
        {
            resto = quantidade - 10;
            conta += resto * 1;
            quantidade -= resto;
        }
        
        else
        {
            conta += 7;
            break;
        }
    }
    
    printf("%d", conta);
    return 0;
}

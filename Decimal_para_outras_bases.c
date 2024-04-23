#include <stdio.h>

int main()
{
    int decimal, resto, i = 0, base;
    char result[32];
    
    printf("Digite um número em base decimal: ");
    scanf("%d", &decimal);
    
    printf("Digite a nova base desse número: ");
    scanf("%d", &base);
    
    while(base != 2 && base != 8 && base != 16)
    {
        printf("Base inválida!\n");
        printf("Digite a nova base desse número: ");
        scanf("%d", &base);
    }
    
    printf("\n%d em base %d é: ", decimal, base);
    
    while (decimal > 0)
    {
        
        
        resto = decimal % base;
        decimal /= base;
        if(base == 16)
        {
            switch(resto)
            {
            
            case 10:
            resto = 'A';
            break;
            
            case 11:
            resto = 'B';
            break;
            
            case 12:
            resto = 'C';
            break;
            
            case 13:
            resto = 'D';
            break;
            
            case 14:
            resto = 'E';
            break;
            
            case 15:
            resto = 'F';
            break;
            
            default:
            resto = resto;
            
            }
        }
        result[i] = resto;
        i++;
        
    }
    

    for (int j = i - 1; j >= 0; j--)
    {
        if(result[j] >= 10)
        printf("%c", result[j]);
        
        else
        printf("%d", result[j]);
    }
    
    return 0;
}

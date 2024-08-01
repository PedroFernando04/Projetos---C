#include <stdio.h>

int main()
{
    int decimal, resto, i = 0, base;
    char result[32];
    
    printf("Digite um número em base decimal: ");
    scanf("%d", &decimal);
    
    while(decimal < 0)
    {
        printf("Número inválido!\nO valor inserido deve ser positivo.");
        printf("Digite um número em base decimal: ");
        scanf("%d", &decimal);
    }
    
    printf("\n\nBinário: 2\nOctal: 8\nHexaDecimal: 16");
    printf("\n\nDigite a nova base desse número: ");
    scanf("%d", &base);
    
    while(base != 2 && base != 8 && base != 16)
    {
        printf("Base inválida!\n");
        printf("Digite a nova base desse número: ");
        scanf("%d", &base);
    }
    
    if(decimal == 0)
    {
        printf("\n0 em base %d é: 0",base);
        return 0;
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
    
return 0;
}

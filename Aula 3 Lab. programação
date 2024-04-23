#include <stdio.h>
#include <locale.h>

/*
Crie um programa que receba o preço de 3 produtos
Informe o total
Em seguida pergunte em quantas parcelas deseja dividir;
Por fim o preço de cada parcela.
Usando no máximo 3 variáveis
*/

int main()
{
    float total=0,produto;
    int parcelas;
    setlocale(LC_ALL,"");
    printf("Digite o 1 preço: ");
    scanf("%f",&produto);
    total+=produto;
    
    printf("Digite o 2 preço: ");
    scanf("%f",&produto);
    total+=produto;
    
    printf("Digite o 3 preço: ");
    scanf("%f",&produto);
    total+=produto;
    
    printf("\nTotal: %.2f",total);
    
    printf("\n\nEm quantas parcelas deseja dividir? ");
    scanf("%i",&parcelas);
    
    printf("\nValor por parcela: %.2f",total/parcelas);

    
return 0;
}

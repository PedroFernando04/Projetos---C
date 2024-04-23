#include <stdio.h>

int main()
{
int acertos=0,resposta;
printf("Primeira: 53 + 12 * 7\n");
scanf("%i",&resposta);
if(resposta==137){
    acertos++;
}
printf("Segunda: 44 * 2 / 2**3 \n");
scanf("%i",&resposta);
if(resposta==11){
    acertos++;
}
printf("Terceira: 75 / 5 * 2 + 3\n");
scanf("%i",&resposta);
if(resposta==75){
    acertos++;
}

if(acertos==1){
    printf("\n\nVocê acertou %i pergunta.",acertos); 
}
if(acertos!=1){
    printf("\n\nVocê acertou %i perguntas.",acertos); 
}
}

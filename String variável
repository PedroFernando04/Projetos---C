#include <stdio.h>

int main()
{
    int dia;
    
    printf("Digite um número de 1 a 7: ");
    scanf("%d",&dia);
    
    
    char array[30]={},fds[16]={"Final de semana"},dc[10]={"Dia comum"},di[20]={"Dia inválido"};
    int i,j;
    
    if(dia == 1 || dia == 7)
    {
        //final de semana
        for(i = 0,j = 0; fds[j]!='\0';j++,i++ )
        {
            array[i]=fds[j];
        }
    }
    else if(dia > 1 && dia < 8)
    {
        //dia comum
        for(i = 0,j = 0; dc[j]!='\0';j++,i++ )
        {
            array[i]=dc[j];
        }
    }
    else
    {
        //dia invalido
        for(i = 0,j = 0; di[j]!='\0';j++,i++ )
        {
            array[i]=di[j];
        }
    }
        
        printf("%s",array);

    return 0;
}

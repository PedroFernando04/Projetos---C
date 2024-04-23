#include <stdio.h>
#include <locale.h>

int main(){
    float lucro,lucro_l,tempo,ir;
    setlocale(LC_ALL,"");
    printf("Informe seu lucro bruto: ");
    scanf("%f",&lucro);
    
    printf("Por quanto tempo esse lucro ficou investido? ");
    scanf("%f",&tempo);
    
    if(tempo<=2){
        ir=0.35;
    }else if(tempo<=4){
        ir=0.3;
    }else if(tempo<=6){
        ir=0.25;
    }else if(tempo<=8){
        ir=0.2;
    }else if(tempo<=10){
        ir=0.15;
    }else if(tempo>10){
        ir=0.1;
    }
    lucro_l=lucro-lucro*ir;
    printf("Lucro líquido: R$%.2f",lucro_l);
    
    
    
    return 0;
    
    }

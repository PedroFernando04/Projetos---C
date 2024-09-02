#include <stdio.h>

int main(){
    int n,total=0;
    printf("Valor devido: ");
    scanf("%d",&n);
    
    while(n<0){
        printf("Valor devido: ");
        scanf("%d",&n);
    }
    
    if (n>=25){
    total+=n/25;
    n%=25;}
    
    if (n>=10){
    total+=n/10;
    n%=10;}
    
    if (n>=5){
    total+=n/5;
    n%=5;}
    
    if (n>=1){
    total+=n/1;
    n%=1;}
    
    printf("%d",total);

}

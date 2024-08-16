//https://www.thehuxley.com/problem/41

#include <stdio.h>

int main() {
    
    int array[5];
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }
    
    //primeiro maior que todos
    if(array[0] >= array[1] && array[0] >= array[2])
    {
        printf("%d\n", array[0]);
        //ordenar os seguintes
        if(array[1] >= array[2])
            printf("%d\n%d\n", array[1], array[2]);
        else
            printf("%d\n%d\n", array[2], array[1]);
    }
    //segundo maior que todos
    else if(array[1] >= array[0] && array[1] >= array[2])
    {
        printf("%d\n", array[1]);
         //ordenar os seguintes
        if(array[0] >= array[2])
            printf("%d\n%d\n", array[0], array[2]);
        else
            printf("%d\n%d\n", array[2], array[0]);
    }
    //terceiro maior que todos ou iguais
    else
    {
        printf("%d\n", array[2]);
         //ordenar os seguintes
         if(array[0] >= array[1])
            printf("%d\n%d\n", array[0], array[1]);
        else
            printf("%d\n%d\n", array[1], array[0]);
    }
	return 0;
}

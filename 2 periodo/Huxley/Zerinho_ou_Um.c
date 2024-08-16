//https://www.thehuxley.com/problem/286

#include <stdio.h>

int main() {
    
    char array[5];
    
    for(int i = 0; i < 3; i++)
        scanf("%d", &array[i]);
    
    if(array[0] != array[1] && array[0] != array[2])
        printf("A");
    
    else if(array[1] != array[0] && array[1] != array[2])
        printf("B");
    
    else if(array[2] != array[0] && array[2] != array[0])
        printf("C");
    
    else
        printf("*");
        
	return 0;
}

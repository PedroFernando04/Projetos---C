#include <stdlib.h>
#include <stdio.h>

int main()
{
    int array[4];
    
    scanf("%d %d %d", &array[0], &array[1], &array[2]);
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(array[i] > array[i + 1])
            {
                array[3] = array[i];
                array[i] = array[i + 1];
                array[i + 1] = array[3];
                
            }
            
            if(array[i] > array[2])
            {
                array[3] = array[i];
                array[i] = array[2];
                array[2] = array[3];
            }
            
        }
    }
    
    system("cls || clear");
    
    printf("\n%d\n%d\n%d", array[0], array[1], array[2]);

    return 0;
}

//https://www.thehuxley.com/problem/328

#include <stdio.h>

int main() {
    int x, y;
    
    scanf("%d %d", &x ,&y);
    
    if(x == 0 && y == 0)
        printf("origem");
    else if(y == 0)
        printf("eixo x");
    else if(x == 0)
        printf("eixo y");
    else
    {
        if(x > 0)
        {
            if(y > 0)
                printf("primeiro");
            else
                printf("quarto");
        }
        
        else
        {
            if(y > 0)
                printf("segundo");
            else
                printf("terceiro");
        }
    }
    
	return 0;
}

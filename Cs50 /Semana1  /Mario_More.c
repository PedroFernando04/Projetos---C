#include <stdio.h>

int main()
{
    int linhas, blocos, n;
    printf("Heigth: ");
    scanf("%d", &n);
    while (n < 1 || n > 8)
    {
        printf("Heigth: ");
        scanf("%d", &n);
    }
    for (linhas = 1; linhas <= n; linhas++)
    {
        for (blocos = 1; blocos <= n; blocos++)
        {
            if (blocos > n - linhas)
                printf("#");
            else if (blocos <= n - linhas)
                printf(" ");
        }
        printf("  ");
        for (blocos = 1; blocos <= n; blocos++)
        {
            if (blocos <= n - (n - linhas))
                printf("#");
        }

        printf("\n");
    }

    return 0;
}

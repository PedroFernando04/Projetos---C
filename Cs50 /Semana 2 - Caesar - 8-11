#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int x = atoi(argv[1]);
    char array[100] = {};
    printf("plaintext: ");
    scanf("%[^\n]", array);

    for (int i = 0; array[i] != '\0'; i++)
    {
        if ((array[i] >= 65 && array[i] <= 90) || (array[i] >= 97 && array[i] <= 122))
        {
            for (int j = 0; j < x; j++)
            {
                array[i]++;
                if (array[i] == 91)
                {
                    array[i] = 65;
                }
                else if (array[i] == 123)
                {
                    array[i] = 97;
                }
                else
                {
                    array[i] = array[i];
                }
            }
        }
        else
        {
            array[i] += 0;
        }
    }
    printf("ciphertext: %s\n", array);

    return 0;
}

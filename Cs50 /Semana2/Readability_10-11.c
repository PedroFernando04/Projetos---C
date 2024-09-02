// índice = 0.0588 * L - 0.296 * S - 15.8
// onde L é a média de letras por 100 palavras no texto e S é a média de frases por 100 palavras no
// texto.
#include <stdio.h>

int main()
{
    char array[1000] = {""};
    int letra = 0, palavra = 1, frase = 0;
    // L=letra*100/palavra
    // S=frase*100/palavra
    printf("Text: ");
    scanf("%[^\n]", array);

    /Letras/
    for (int l = 0; array[l] != '\0'; l++)
    { // 97==a|122==z
        if ((array[l] >= 65 && array[l] <= 90) || (array[l] >= 97 && array[l] <= 122))
        { // 65==A|90==Z
            letra++;
        }
        else
            letra += 0;
    }
    /Letras/

    /Palavras/
    for (int p = 0; array[p] != '\0'; p++)
    {
        if (array[p] == 32)
            palavra++;
        else
            palavra += 0;
    }

    /Palavras/

    /Frases/
    for (int f = 0; array[f] != '\0'; f++)
    {
        if (array[f] == 33 || array[f] == 46 || array[f] == 63)
            frase++;
        else
            frase += 0;
    }

    /Frases/
    float L = (letra * 100 / palavra), S = (frase * 100 / palavra), serie;
    serie = 0.0588 * L - 0.296 * S - 15.8;
    if (serie < 1)
        printf("Before Grade 1\n");
    else if (serie > 16)
        printf("Grade 16+\n");
    else
        printf("Grade %.0f\n", serie);

    return 0;
}

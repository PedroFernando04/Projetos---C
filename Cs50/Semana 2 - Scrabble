/*

1 - A(65/97), E(69/101), I(73/105), L(76/108), N(78/110), O(79/111), R(82/114), S(83/115),
T(84/116), U(85/117)

2 - D(68/100), G(71/103)

3 - B(66/98), C(67/99), M(77/109), P(80/112)

4 - F(70/102), H(72/104), V(86/118), W(87/119), Y(89,121)

5 - K(75/107)

8 - J(74/106), X(88/120)

10 - Q(81/113), Z(90/122)

*/

#include <stdio.h>

int points(char bla[20]);

int main()
{
    char p1[20], p2[20];
    printf("Player 1: ");
    int jogador1 = points(p1);
    printf("Player 2: ");
    int jogador2 = points(p2);

    if (jogador1 > jogador2)
        printf("Player 1 wins!\n");
    else if (jogador2 > jogador1)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");
}

int points(char bla[20])
{

    char array[100] = {};
    int pontos = 0;
    scanf("%s", array);

    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] == 65 || array[i] == 97 || array[i] == 69 || array[i] == 101 ||
            array[i] == 73 || array[i] == 105 || array[i] == 78 || array[i] == 110 ||
            array[i] == 79 || array[i] == 111 || array[i] == 82 || array[i] == 114 ||
            array[i] == 83 || array[i] == 115 || array[i] == 84 || array[i] == 116 ||
            array[i] == 85 || array[i] == 117 || array[i] == 76 || array[i] == 108)

        {
            pontos += 1;
        }

        else if (array[i] == 68 || array[i] == 100 || array[i] == 71 || array[i] == 103)

        {
            pontos += 2;
        }

        else if (array[i] == 66 || array[i] == 98 || array[i] == 67 || array[i] == 99 ||
                 array[i] == 77 || array[i] == 109 || array[i] == 80 || array[i] == 112)

        {
            pontos += 3;
        }

        else if (array[i] == 70 || array[i] == 102 || array[i] == 72 || array[i] == 104 ||
                 array[i] == 86 || array[i] == 118 || array[i] == 87 || array[i] == 119 ||
                 array[i] == 89 || array[i] == 121)

        {
            pontos += 4;
        }

        else if (array[i] == 75 || array[i] == 107)

        {
            pontos += 5;
        }

        else if (array[i] == 74 || array[i] == 106 || array[i] == 88 || array[i] == 120)

        {
            pontos += 8;
        }

        else if (array[i] == 81 || array[i] == 113 || array[i] == 90 || array[i] == 122)

        {
            pontos += 10;
        }

        else
            pontos += 0;
    }

    return pontos;
}

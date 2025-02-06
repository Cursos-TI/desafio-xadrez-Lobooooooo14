#include <stdio.h>

void torre(int n)
{
    if (n > 0)
    {
        printf("Direita\n");
        torre(n - 1);
    }
}

void rainha(int n)
{
    if (n > 0)
    {
        printf("Esquerda\n");
        rainha(n - 1);
    }
}

int main()
{
    // bispo
    printf("Bispo: \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                printf("Cima e Direita\n");
            }
        }
    }

    // Torre
    printf("\nTorre: \n");
    torre(5);

    // Rainha
    printf("\nRainha: \n");
    rainha(8);

    // Cavalo
    printf("\nCavalo: \n");

    for (int i = 0, j = 0; i < 3; i++, j++)
    {
        printf("Cima\n");

        if (j == 2)
        {
            printf("Direita\n");
        }
    }

    return 0;
}

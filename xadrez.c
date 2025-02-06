#include <stdio.h>

int main()
{
    // bispo
    printf("Bispo: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Cima e Direita\n");
    }

    // Torre
    printf("\nTorre: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    // Rainha
    printf("\nRainha: \n");

    for (int i = 0; i < 8; i++)
    {
        printf("Esquerda\n");
    }

    // Cavalo
    printf("\nCavalo: \n");

    int horse_steps = 0;

    do
    {
        for (int i = 0; i < 3; i++)
        {
            printf("Baixo\n");
        }

        printf("Esquerda\n");
        horse_steps++;
    } while (horse_steps < 1);

    return 0;
}

#include <stdio.h>

int main(void)
{
    int start, end, years = 0;

    // Solicita o tamanho inicial
    do
    {
        printf("Start size: ");
        scanf("%d", &start);
    } while (start < 9);

    // Solicita o tamanho final
    do
    {
        printf("End size: ");
        scanf("%d", &end);
    } while (end < start);

    // Calcula os anos necessários
    int population = start;

    while (population < end)
    {
        int born = population / 3;
        int dead = population / 4;
        population = population + born - dead;
        years++;
    }

    printf("Years: %d\n", years);

    return 0;
}

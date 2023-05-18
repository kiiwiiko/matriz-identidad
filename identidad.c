#include <stdio.h>
#include <conio.h>

int main()
{
    int filas, columnas;
    printf("Cuantas filas tendra la matriz: ");
    scanf("%d", &filas);
    printf("Cuantas columnas tendra la matriz: ");
    scanf("%d", &columnas);
    int I[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
           if(i==j)
           {
            I[i][j] = 1;
           }else
           {
            I[i][j] = 0;
           }
            printf("%d \t", I[i][j]);
        }
        printf("\n\n");
    }
    getch();
    return 0;
}
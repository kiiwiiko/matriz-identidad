#include <stdio.h>
#include <conio.h>

int main()
{
    int filas, columnas, n;

    printf("Cuantas filas tendra la matriz: ");
    scanf("%d", &filas);
    printf("Cuantas columnas tendra la matriz: ");
    scanf("%d", &columnas);
    int I[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("El digito %d%d", i+1, j+1, I[i][j]);
            scanf("%d", &n);
           if(i==j)
           {
            I[i][j] = 1;
           }else
           {
            I[i][j] = 0;
           }
        }
        
    }

    getch();
    return 0;
}
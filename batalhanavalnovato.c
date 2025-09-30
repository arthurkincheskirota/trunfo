#include <stdio.h>

int main () {
    
    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabela[10][10] =
    {
    {0, 0, 3, 3, 3, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}   
    };
    
    printf ("--- MAPA DO JOGO DE BATALHA NAVAL ---\n\n");
    printf("    "); 

    for (int k = 0; k < 10; k++)
        {            
            printf("%c ", linha[k]);
        }  

    printf("\n");  

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        if (i <= 8) 
        {
            printf(" %d  ", i + 1);
        } else {
            printf("%d  ", i + 1);
        }
        
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabela[i][j]);

        }
    }
    
}


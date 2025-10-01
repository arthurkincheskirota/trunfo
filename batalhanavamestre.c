#include <stdio.h>

int main () {
    
    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabela[10][10];
    int cone, cruz, octa;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)    
        {            
            tabela[i][j] = 0;  
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i == 4 ) && (j == i + 2))
            {
                tabela[i][j] = 3;
                tabela[i + 1][j + 1] = 3;
                tabela[i + 2][j + 2] = 3;
            }           
        }
        
    }  
        
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i == 1 ) && (j == i + 2))
            {
                tabela[i][j] = 3;
                tabela[i + 1][j - 1] = 3;
                tabela[i + 2][j - 2] = 3;
            } 
        }
        
    }  
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i == 8) && (j > 5 && j < 9))
            {
                tabela[i][j] = 3;
            } 
        }
        
    }     

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((j == 0) && (i > 5 && i < 9))
            {
                tabela[i][j] = 3;
            } 
        }
        
    }         
   
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i == 1 ) && (j == 2))
            {
                tabela[i][j] = 5;
                tabela[i + 1][j] = 5;
                tabela[i + 2][j] = 5;
                tabela[i + 1][j + 1] = 5;
                tabela[i + 1][j - 1] = 5;
                tabela[i + 2][j + 1] = 5;
                tabela[i + 2][j - 1] = 5;
                tabela[i + 2][j + 2] = 5;
                tabela[i + 2][j - 2] = 5;
            }           
        }
        
    }  
       
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i == 0 ) && (j == 7))
            {
                tabela[i][j] = 5;
                tabela[i + 1][j] = 5;
                tabela[i + 2][j] = 5;
                tabela[i + 3][j] = 5;
                tabela[i + 4][j] = 5;
                tabela[i + 5][j] = 5;
                tabela[i + 2][j - 1] = 5;
                tabela[i + 2][j + 1] = 5;
                tabela[i + 2][j - 2] = 5;
                tabela[i + 2][j + 2] = 5;
            }           
        }
        
    }    

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i == 7 ) && (j == 5))
            {
                tabela[i][j] = 5;
                tabela[i + 1][j] = 5;
                tabela[i + 2][j] = 5;
                tabela[i + 1][j + 1] = 5;
                tabela[i + 1][j - 1] = 5;
            }           
        }
        
    }  
    //MAPEAMENTO 

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
        } else 
        {
            printf("%d  ", i + 1);
        }
            for (int j = 0; j < 10; j++)
            {
                printf("%d ", tabela[i][j]);
            }
            
    }



    
}

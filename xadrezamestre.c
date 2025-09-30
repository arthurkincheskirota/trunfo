#include <stdio.h>

void mtorre(int i)
{
    if (i > 0)
    {
        printf("DIREITA\n");   
        mtorre(i - 1);
    }
}    

void mrainha(int i)
{
    if (i > 0)
    {
        printf("ESQUERDA\n");  
        mrainha(i - 1);
    }
}

void mbispo(int)
{
int bispo1, bispo2;
for (bispo1 = 0; bispo1 < 5; bispo1++)
{
    for (bispo2 = 0; bispo2 < 1; bispo2++)
    {
        printf("CIMA\n");  
    }
    printf("DIREITA\n");      
}
}    


int main () { 
  
int torre = 5, bispo1, bispo2, rainha = 8;
int cavalo1 = 0, cavalo2 = 0, turnoc = 0;

printf("MOVIMENTO DA TORRE\n\n");
mtorre(torre);

printf("\nMOVIMENTO DO BISPO\n\n");
mbispo(1);

printf("\nMOVIMENTO DA RAINHA\n\n");
mrainha(rainha);

printf("\nMOVIMENTO DO CAVALO\n\n");

for (cavalo1, turnoc, cavalo2; turnoc < 3; turnoc++)
{
    if (cavalo1 < 2)
    {
        printf("CIMA\n");
        cavalo1++;
    }
    else if (cavalo2 < 1)
    {
        printf("DIREITA\n"); 
        cavalo2++; 
        if (cavalo1 == 1)break;         
    }
    
    
} 

}
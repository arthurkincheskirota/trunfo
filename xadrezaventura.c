#include <stdio.h>

int main () { 
  
int torre = 0, bispo = 0, rainha = 0;
int cavalo1, cavalo2;

printf("MOVIMENTO DA TORRE\n\n");
while (torre < 5)
{ 
    printf("DIREITA\n");   
    torre++; 
}

printf("\nMOVIMENTO DO BISPO\n\n");

do
{
    printf("DIREITA CIMA\n");
    bispo++;  
} while (bispo <5);

printf("\nMOVIMENTO DA RAINHA\n\n");

for (rainha; rainha < 8; rainha++)
{
    printf("ESQUERDA\n");  
}

printf("\nMOVIMENTO DO CAVALO\n\n");

for (cavalo1 = 0; cavalo1 < 1; cavalo1++)
{
    for (cavalo2 = 0; cavalo2 < 2; cavalo2++)
    {
        printf("BAIXO\n");  
    }
    printf("ESQUERDA\n");      
}


}
#include <stdio.h>
int main(){
    //Movimentação da Torre em 5 casas.
    int Torre = 1;

     while (Torre <= 5)
    {
        Torre++;
        printf("Torre - vertical\n");
    }
    
    // Movimentação do bispo
    int Bispo =1;

    do
    {
       printf("Bispo - cima e à direita\n");
       Bispo++;

    } while (Bispo <= 4);
    
    printf("Bispo - cima e à direita\n");


    //Movimentação da rainha
    int Rainha;

    for (Rainha = 1; Rainha <= 8; Rainha++)
    {
        printf("Rainha - horizontal\n"); 
    }
    

    return 0;
    
}
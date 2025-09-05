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
    

    //Movimentação do cavalo em L
    int Cavalo = 1;

    while (Cavalo--)  /*é o operador de pós-decremento.

Ele testa o valor atual, e depois diminui em 1.

No início:

Cavalo = 1

while (Cavalo--) → verifica 1 (verdadeiro).
Depois da verificação, Cavalo vira 0.

Na próxima vez que o while tentar rodar:

Cavalo = 0

while (0--) → verifica 0 (falso), e para o loop.*/
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo - Cima\n"); 
        }
        printf("Cavalo - Direita\n");   
    }

    return 0;
    
}

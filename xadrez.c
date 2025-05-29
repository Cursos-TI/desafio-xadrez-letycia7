#include <stdio.h>

// Funções Recursivas

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo (diagonal Cima Direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função Principal

int main() {
    // Quantidade de casas para cada movimento
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // 
    
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    
    // 
    
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");
    
    // 
    
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // 
    
    printf("Movimento do Cavalo:\n");
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 1; i <= movimentosVerticais; i++) {
        if (i == 2) {
            // Segunda casa para cima
            printf("Cima\n");
            for (int j = 1; j <= movimentosHorizontais; j++) {
                if (j != 1) {
                    continue; // não necessário, mas exemplo de uso
                }
                printf("Direita\n");
                break; // após uma direita, sai do loop interno
            }
        } else {
            printf("Cima\n");
        }
    }
    printf("\n");

    // 

    printf("Movimento do Bispo (Loops Aninhados):\n");

    int movimentosDiagonal = 5;
    for (int i = 1; i <= movimentosDiagonal; i++) { // Movimento vertical (Cima)
        for (int j = 1; j <= 1; j++) {               // Movimento horizontal (Direita)
            printf("Cima Direita\n");
        }
    }
    printf("\n");

    return 0;
}
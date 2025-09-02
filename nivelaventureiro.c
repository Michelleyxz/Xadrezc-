#include <stdio.h>

int main() {
    // Nível Aventureiro - Movimentação do Cavalo
    // Vamos simular todas as movimentações possíveis do cavalo a partir de uma posição inicial

    int posX = 4; // Posição inicial do cavalo no eixo X (coluna) - escolhida como exemplo
    int posY = 4; // Posição inicial do cavalo no eixo Y (linha) - escolhida como exemplo

    printf("=== Movimentação do Cavalo ===\n");
    printf("Posição inicial: (%d, %d)\n", posX, posY);

    // O cavalo no xadrez se move em "L": 2 casas em uma direção + 1 na perpendicular
    // Existem 8 movimentos possíveis teoricamente

    // Arrays com deslocamentos possíveis em X e Y para simular os movimentos em L
    int movX[8] = {  2,  1, -1, -2, -2, -1,  1,  2 }; // Deslocamentos possíveis no eixo X
    int movY[8] = {  1,  2,  2,  1, -1, -2, -2, -1 }; // Deslocamentos possíveis no eixo Y

    // Estrutura de repetição para testar cada um dos 8 movimentos
    for (int i = 0; i < 8; i++) {
        int novoX = posX + movX[i]; // Calcula a nova posição no eixo X
        int novoY = posY + movY[i]; // Calcula a nova posição no eixo Y

        // Verifica se a nova posição está dentro do tabuleiro (1 a 8)
        if (novoX >= 1 && novoX <= 8 && novoY >= 1 && novoY <= 8) {
            // Se a posição for válida, exibe a coordenada
            printf("Movimento %d: (%d, %d)\n", i + 1, novoX, novoY);
        } else {
            // Caso saia do tabuleiro, apenas informa que não é válido
            printf("Movimento %d: (%d, %d) -> Fora do tabuleiro\n", i + 1, novoX, novoY);
        }
    }

    return 0; // Indica que o programa terminou corretamente
}

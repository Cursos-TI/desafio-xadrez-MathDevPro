#include <stdio.h>

int main() {
    int opcao, casas;
    
    // Movimento da Torre com escolha do usuário
    printf("Movimento da Torre:\n");
    printf("Escolha a direção da Torre:\n");
    printf("1 - Para Frente\n");
    printf("2 - Para Trás\n");
    scanf("%d", &opcao);
    
    printf("Quantas casas deseja mover? ");
    scanf("%d", &casas);
    
    for (int i = 0; i < casas; i++) {
        if (opcao == 1)
            printf("Frente\n");
        else if (opcao == 2)
            printf("Trás\n");
        else {
            printf("Opção inválida.\n");
            return 1;
        }
    }
    
    printf("\n"); // Espaço entre os movimentos
    
    // Movimento do Bispo com escolha do usuário
    printf("Movimento do Bispo:\n");
    printf("Escolha a diagonal do Bispo:\n");
    printf("1 - Cima Direita\n");
    printf("2 - Cima Esquerda\n");
    printf("3 - Baixo Direita\n");
    printf("4 - Baixo Esquerda\n");
    scanf("%d", &opcao);
    
    printf("Quantas casas deseja mover? ");
    scanf("%d", &casas);
    
    for (int i = 0; i < casas; i++) {
        switch (opcao) {
            case 1: printf("Cima, Direita\n"); break;
            case 2: printf("Cima, Esquerda\n"); break;
            case 3: printf("Baixo, Direita\n"); break;
            case 4: printf("Baixo, Esquerda\n"); break;
            default: printf("Opção inválida.\n"); return 1;
        }
    }
    
    printf("\n"); // Espaço entre os movimentos
    
    // Movimento da Rainha com escolha do usuário
    printf("Movimento da Rainha:\n");
    printf("Escolha a direção da Rainha:\n");
    printf("1 - Para Frente\n");
    printf("2 - Para Trás\n");
    printf("3 - Para Direita\n");
    printf("4 - Para Esquerda\n");
    printf("5 - Cima Direita\n");
    printf("6 - Cima Esquerda\n");
    printf("7 - Baixo Direita\n");
    printf("8 - Baixo Esquerda\n");
    scanf("%d", &opcao);
    
    printf("Quantas casas deseja mover? ");
    scanf("%d", &casas);
    
    for (int i = 0; i < casas; i++) {
        switch (opcao) {
            case 1: printf("Frente\n"); break;
            case 2: printf("Trás\n"); break;
            case 3: printf("Direita\n"); break;
            case 4: printf("Esquerda\n"); break;
            case 5: printf("Cima, Direita\n"); break;
            case 6: printf("Cima, Esquerda\n"); break;
            case 7: printf("Baixo, Direita\n"); break;
            case 8: printf("Baixo, Esquerda\n"); break;
            default: printf("Opção inválida.\n"); return 1;
        }
    }
    
    printf("\n"); // Espaço entre os movimentos
    
    // Movimento do Cavalo com escolha do usuário
    printf("Movimento do Cavalo:\n");
    printf("Escolha a direção do Cavalo:\n");
    printf("1 - Cima Direita\n");
    printf("2 - Cima Esquerda\n");
    printf("3 - Baixo Direita\n");
    printf("4 - Baixo Esquerda\n");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            for (int i = 0; i < 2; i++) printf("Cima\n");
            printf("Direita\n");
            break;
        case 2:
            for (int i = 0; i < 2; i++) printf("Cima\n");
            printf("Esquerda\n");
            break;
        case 3:
            for (int i = 0; i < 2; i++) printf("Baixo\n");
            printf("Direita\n");
            break;
        case 4:
            for (int i = 0; i < 2; i++) printf("Baixo\n");
            printf("Esquerda\n");
            break;
        default:
            printf("Opção inválida.\n");
    }
    
    return 0;
}

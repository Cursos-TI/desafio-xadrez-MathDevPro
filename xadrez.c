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
    
    int j = 0;
    while (j < casas) {
        switch (opcao) {
            case 1: printf("Cima, Direita\n"); break;
            case 2: printf("Cima, Esquerda\n"); break;
            case 3: printf("Baixo, Direita\n"); break;
            case 4: printf("Baixo, Esquerda\n"); break;
            default: printf("Opção inválida.\n"); return 1;
        }
        j++;
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
    
    int k = 0;
    do {
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
        k++;
    } while (k < casas);
    
    printf("\n"); // Espaço entre os movimentos
    
    // Movimento do Cavalo com escolha da direção
    printf("Movimento do Cavalo:\n");
    printf("Escolha a direção do Cavalo:\n");
    printf("1 - Cima, Cima, Direita\n");
    printf("2 - Cima, Cima, Esquerda\n");
    printf("3 - Baixo, Baixo, Direita\n");
    printf("4 - Baixo, Baixo, Esquerda\n");
    printf("5 - Direita, Direita, Cima\n");
    printf("6 - Direita, Direita, Baixo\n");
    printf("7 - Esquerda, Esquerda, Cima\n");
    printf("8 - Esquerda, Esquerda, Baixo\n");
    scanf("%d", &opcao);
    
    // Loop para simular o movimento do cavalo com base na escolha do usuário
    switch (opcao) {
        case 1: 
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            break;
        case 2: 
            printf("Cima\n");
            printf("Cima\n");
            printf("Esquerda\n");
            break;
        case 3: 
            printf("Baixo\n");
            printf("Baixo\n");
            printf("Direita\n");
            break;
        case 4: 
            printf("Baixo\n");
            printf("Baixo\n");
            printf("Esquerda\n");
            break;
        case 5: 
            printf("Direita\n");
            printf("Direita\n");
            printf("Cima\n");
            break;
        case 6: 
            printf("Direita\n");
            printf("Direita\n");
            printf("Baixo\n");
            break;
        case 7: 
            printf("Esquerda\n");
            printf("Esquerda\n");
            printf("Cima\n");
            break;
        case 8: 
            printf("Esquerda\n");
            printf("Esquerda\n");
            printf("Baixo\n");
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    return 0;
}

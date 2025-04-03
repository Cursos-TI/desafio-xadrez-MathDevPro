#include <stdio.h>

// Função recursiva para o movimento da torre
void moverTorre(int casas1, int opcao1) {
    if (casas1 <= 0) {
        printf("\n"); // Espaço entre os movimentos
        return;
    }

    if (opcao1 == 1) {
        printf("Frente\n");
    } else if (opcao1 == 2) {
        printf("Trás\n");
    } else {
        printf("Opção inválida.\n");
        return;
    }

    moverTorre(casas1 - 1, opcao1); // Chamada recursiva
}

// Função recursiva para o movimento do bispo com loops aninhados
void moverBispo(int casas, int opcao) {
    if (casas <= 0) {
        printf("\n"); // Espaço entre os movimentos
        return;
    }

    // Loop externo para o movimento vertical
    for (int i = 0; i < 1; i++) {
        // Loop interno para o movimento horizontal
        for (int j = 0; j < 1; j++) {
            if (opcao == 1) {
                printf("Cima direita\n");
            } else if (opcao == 2) {
                printf("Cima esquerda\n");
            } else if (opcao == 3) {
                printf("Baixo direita\n");
            } else if (opcao == 4) {
                printf("Baixo esquerda\n");
            } else {
                printf("Opção inválida.\n");
                return;
            }
        }
    }

    // Chamada recursiva para o próximo movimento
    moverBispo(casas - 1, opcao);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas3, int opcao3) {
    if (casas3 <= 0) {
        printf("\n"); // Espaço entre os movimentos
        return;
    }

    if (opcao3 == 1) {
        printf("Frente\n");
    } else if (opcao3 == 2) {
        printf("Trás\n");
    } else if (opcao3 == 3) {
        printf("Direita\n");
    } else if (opcao3 == 4) {
        printf("Esquerda\n");
    } else if (opcao3 == 5) {
        printf("Cima direita\n");
    } else if (opcao3 == 6) {
        printf("Cima esquerda\n");
    } else if (opcao3 == 7) {
        printf("Baixo direita\n");
    } else if (opcao3 == 8) {
        printf("Baixo esquerda\n");
    } else {
        printf("Opção inválida.\n");
        return;
    }

    moverRainha(casas3 - 1, opcao3); // Chamada recursiva
}




int main() {
    int opcao1, casas1;//declara as variaveis para a torre
    int opcao2, casas2;// declara as variaveis para o bispo
    int opcao3, casas3;// declara as variaveis para a rainha
    int opcao;// declara as variaveis para o cavalo
  // Movimento da Torre com escolha do usuário
printf("Movimento da Torre:\n");

// Loop para garantir que o usuário insira uma direção válida
do {
    printf("Escolha a direção da Torre:\n");
    printf("1 - Para Frente\n");
    printf("2 - Para Trás\n");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 2) {
        printf("Opção inválida. Tente novamente.\n");
    }
} while (opcao1 < 1 || opcao1 > 2);

// Loop para garantir que o usuário insira um número de casas válido
do {
    printf("Quantas casas deseja mover? ");
    scanf("%d", &casas1);

    if (casas1 < 1) {
        printf("Número de casas inválido. Tente novamente.\n");
    }
} while (casas1 < 1);

// Chamada da função recursiva
moverTorre(casas1, opcao1);
printf("\n"); // Espaço entre os movimentos
    


    // Movimento do Bispo com escolha do usuário
printf("Movimento do Bispo:\n");
do {
    printf("Escolha a direção do Bispo:\n");
    printf("1 - Para frente direita\n");
    printf("2 - Para frente esquerda\n");
    printf("3 - Para trás direita\n");
    printf("4 - Para trás esquerda\n");
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 4) {
        printf("Opção inválida. Tente novamente.\n");
    }
} while (opcao2 < 1 || opcao2 > 4);

do {
    printf("Quantas casas deseja mover? ");
    scanf("%d", &casas2);

    if (casas2 < 1) {
        printf("Número de casas inválido. Tente novamente.\n");
    }
} while (casas2 < 1);

moverBispo(casas2, opcao2); // Chamada da função recursiva

   


    // Movimento da Rainha com escolha do usuário
printf("Movimento da Rainha:\n");
printf("Escolha a direção da Rainha:\n");
printf("1 - Para frente\n");
printf("2 - Para trás\n");
printf("3 - Para direita\n");
printf("4 - Para esquerda\n");
printf("5 - Para cima direita\n");
printf("6 - Para cima esquerda\n");
printf("7 - Para baixo direita\n");
printf("8 - Para baixo esquerda\n");
scanf("%d", &opcao3);

// Verifica se a opção é inválida
if (opcao3 < 1 || opcao3 > 8) {
    printf("Opção inválida.\n");
    return 1; // Encerra o programa ou substitua por lógica para tentar novamente
}

    printf("Quantas casas deseja mover? ");
    scanf("%d", &casas3);

    moverRainha(casas3, opcao3); // Chamada da função recursiva
    printf("\n"); // Espaço entre os movimentos
    
    
    // Movimento do Cavalo com escolha do usuário
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

// Validação da entrada
if (opcao < 1 || opcao > 8) {
    printf("Opção inválida. Tente novamente.\n");
    return 1;
}

// Loop aninhado para simular o movimento do Cavalo
for (int i = 0; i < 2; i++) { // Movimento vertical (duas casas)
    for (int j = 0; j < 1; j++) { // Movimento horizontal (uma casa)
        if (opcao == 1) {
            printf("Cima\n");
            if (i == 1) printf("Direita\n");
        } else if (opcao == 2) {
            printf("Cima\n");
            if (i == 1) printf("Esquerda\n");
        } else if (opcao == 3) {
            printf("Baixo\n");
            if (i == 1) printf("Direita\n");
        } else if (opcao == 4) {
            printf("Baixo\n");
            if (i == 1) printf("Esquerda\n");
        } else if (opcao == 5) {
            printf("Direita\n");
            if (i == 1) printf("Cima\n");
        } else if (opcao == 6) {
            printf("Direita\n");
            if (i == 1) printf("Baixo\n");
        } else if (opcao == 7) {
            printf("Esquerda\n");
            if (i == 1) printf("Cima\n");
        } else if (opcao == 8) {
            printf("Esquerda\n");
            if (i == 1) printf("Baixo\n");
        } else {
            printf("Opção inválida.\n");
            break; // Sai do loop se a opção for inválida
        }
    }
}

    return 0;
}

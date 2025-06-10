
#include <stdio.h>

#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8

// Torre recursiva
void moverTorre(char* direcao, int casas) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverTorre(direcao, casas - 1);
}

// Rainha recursiva
void moverRainha(char* direcao, int casas) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverRainha(direcao, casas - 1);
}

// Bispo recursiva
void moverBispoRec(char* direcao, int casas) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverBispoRec(direcao, casas - 1);
}

// Bispo loops aninhados
void moverBispoComLoops() {
    printf("\nMovimento do Bispo com loops aninhados:\n");
    for (int i = 0; i < 2; i++) { // movimento vertical
        for (int j = 0; j < 2; j++) { // movimento horizontal
            printf("Diagonal (Vertical %d, Horizontal %d)\n", i + 1, j + 1);
        }
    }
}

// Cavalo loops complexos 
void moverCavalo() {
    printf("\nMovimento do Cavalo em 'L' para cima e direita:\n");
    int movimento_feito = 0;
    for (int i = 0; i < 3 && !movimento_feito; i++) {
        for (int j = 0; j < 3 && !movimento_feito; j++) {
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimento_feito = 1;
                break;
            }
        }
    }
}

int main() {
    int peca, lado;

    printf("Escolha a peça que deseja mexer...\n");
    printf("1 = Torre\n2 = Bispo\n3 = Rainha\n4 = Cavalo\n");
    scanf("%d", &peca);

    switch (peca) {
    case 1: // torre
        printf("Escolha o lado:\n");
        printf("1 = Cima\n");
        printf("2 = Baixo\n");
        printf("3 =Direita\n");
        printf("4 = Esquerda\n");
        scanf("%d", &lado);
        printf("\n");

        if (lado == 1) moverTorre("Cima", CASAS_TORRE);
        else if (lado == 2) moverTorre("Baixo", CASAS_TORRE);
        else if (lado == 3) moverTorre("Direita", CASAS_TORRE);
        else if (lado == 4) moverTorre("Esquerda", CASAS_TORRE);
        break;

    case 2: // bispo
        printf("Escolha o lado:\n");
        printf("1 = Diagonal frente e esquerda\n");
        printf("2 = Diagonal frente e direita\n");
        printf("3 = Diagonal trás e esquerda\n");
        printf("4 = Diagonal trás e direita\n");
        scanf("%d", &lado);
        printf("\n");

        if (lado == 1) moverBispoRec("Frente e Esquerda", CASAS_BISPO);
        else if (lado == 2) moverBispoRec("Frente e Direita", CASAS_BISPO);
        else if (lado == 3) moverBispoRec("Trás e Esquerda", CASAS_BISPO);
        else if (lado == 4) moverBispoRec("Trás e Direita", CASAS_BISPO);

        moverBispoComLoops(); // loops aninhados
        break;

    case 3: // rainha
        printf("Escolha o lado:\n");
        printf("1 = Cima\n");
        printf("2 = Baixo\n");
        printf("3 = Direita\n");
        printf("4 = Esquerda\n");
        printf("5 = Diagonal frente esquerda\n");
        printf("6 = Diagonal para Direita\n");
        scanf("%d", &lado);
        printf("\n");

        if (lado == 1) moverRainha("Cima", CASAS_RAINHA);
        else if (lado == 2) moverRainha("Baixo", CASAS_RAINHA);
        else if (lado == 3) moverRainha("Direita", CASAS_RAINHA);
        else if (lado == 4) moverRainha("Esquerda", CASAS_RAINHA);
        else if (lado == 5) moverRainha("Frente e Esquerda", CASAS_RAINHA);
        else if (lado == 6) moverRainha("Frente e Direita", CASAS_RAINHA);
        break;

    case 4: // cavalo
        moverCavalo();
        break;

    default:
        printf("Peça inválida!\n");
    }

    return 0;
}
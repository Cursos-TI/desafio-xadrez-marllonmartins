#include<stdio.h>

int main() {


    //Variaveis usadas
    int peca, lado, b = 0 , t , r = 0;
    //Escolha da peça que sera mexida
    printf("Escolha a peça que deseja mexer...\n");
    printf("1 = Torre\n");
    printf("2 = Bispo\n");
    printf("3 = Rainha\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:// escolha para qual lado a torre ira mexer
        printf("Escolha para qual lado...\n");
        printf("1 = Frente\n");
        printf("2 = Trás\n");
        printf("3 = Direita\n");
        printf("4 = Esquerda\n");
        scanf("%d", &lado);

        if (lado == 1) {
            for (t = 0; t < 5; t++) {
                printf("Para frente\n");
            }
        } else if (lado == 2)
      
        {
            for (t = 0; t < 5; t++) {
                printf("Para trás\n");
            }
        } else if (lado == 3)
        {
            for (t = 0; t < 5; t++)
            {
                printf("Para a Direita\n");
            }
            
        } else
        {
            for (t = 0; t < 5; t++)
            {
                printf("Para a Esquerda\n");
            }
            
        }
        
        

        break;

    case 2://Escolha para qual lado o bispo ira mexer
        printf("Escolha pra qual lado...\n");
        printf("1 = Diagonal para frente e para a esquerda\n");
        printf("2 = Diagonal para frente e para a direita\n");
        printf("3 = Diagonal para trás e para a esquerda\n");
        printf("4 = Diagonal para trás e para a direita\n");
        scanf("%d", &lado);

        
        if (lado == 1) {
            do {
                printf("Um para frente e um para esquerda\n");
                b++;
            } while (b < 5);
        } else if (lado == 2)
        {
            b = 0;
            do {
                printf("Um para frente e um para direita\n");
                b++;
            } while (b < 5);
        } else if (lado == 3)
        {
            do
            {
                b++;    
                printf("Um para trás e um para a esquerda\n");
            } while (b < 5);
            
        } else
        {
            do
            {
                b++;
                printf("Um para trás e um para a direita\n");

            } while (b < 5);
            
        }
        
        
        break;

    case 3://Escolha pra qual lado a rainha ira mexer
        printf("Escolha pra qual lado...\n");
        printf("1 = Diagonal para esquerda\n");
        printf("2 = Diagonal para direita\n");
        printf("3 = Esquerda\n");
        printf("4 = Direita\n");
        printf("5 = Para frente\n");
        printf("6 = Para tras\n");
        scanf("%d", &lado);

        r = 0;
        if (lado == 1) {
            while (r < 5) {
                printf("Um para frente e um para esquerda\n");
                r++;
            }
        } else if (lado == 2) {
            while (r < 5) {
                printf("Um para frente e um para direita\n");
                r++;
            }
        } else if (lado == 3) {
            while (r < 5) {
                printf("Esquerda\n");
                r++;
            }
        } else if (lado == 4) {
            while (r < 5) {
                printf("Direita\n");
                r++;
            }
        } else if (lado == 5) {
            while (r < 5) {
                printf("Para frente\n");
                r++;
            }
        } else if (lado == 6) {
            while (r < 5) {
                printf("Para trás\n");
                r++;
            }
        } else {
            printf("Lado inválido!\n");
        }
        break;
        default;//caso a nenhuma peca dessa 3 for escolhida
        printf("Peça não implementada.\n");
        break;
    }

    return 0;
} 
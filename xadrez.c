#include<stdio.h>

int main() {

    int peca, lado, b = 0 , t , r = 0, c1, c2 = 0;

    printf("Escolha a peça que deseja mexer...\n");
    printf("1 = Torre\n");
    printf("2 = Bispo\n");
    printf("3 = Rainha\n");
    printf("4 = Cavalo\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:
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

    case 2:
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

    case 3:
        printf("Escolha pra qual lado...\n");
        printf("1 = Diagonal para esquerda\n");
        printf("2 = Diagonal para direita\n");
        printf("3 = Esquerda\n");
        printf("4 = Direita\n");
        printf("5 = Para frente\n");
        printf("6 = Para tras\n");
        scanf("%d", &lado);
        printf("\n");

        r = 0;
        if (lado == 1) {
            while (r < 8) {
                printf("Um para frente e um para esquerda\n");
                r++;
            }
        } else if (lado == 2) {
            while (r < 8) {
                printf("Um para frente e um para direita\n");
                r++;
            }
        } else if (lado == 3) {
            while (r < 8) {
                printf("Esquerda\n");
                r++;
            }
        } else if (lado == 4) {
            while (r < 8) {
                printf("Direita\n");
                r++;
            }
        } else if (lado == 5) {
            while (r < 8) {
                printf("Para frente\n");
                r++;
            }
        } else if (lado == 6) {
            while (r < 8) {
                printf("Para trás\n");
                r++;
            }
        } else {
            printf("Lado inválido!\n");
        }
        break;
case 4:
    printf("Escolha pra qual lado...\n");
    printf("1 = L para frente e para direita\n");
    printf("2 = L para frente e para esquerda\n");
    printf("3 = L para trás e para direita\n");
    printf("4 = L para trás e para esquerda\n");
    scanf("%d", &lado);

    if (lado == 1) {
        for (c1 = 1; c1 <= 1; c1++) {
            printf("Frente\n");
            printf("Frente\n");

            c2 = 0;
            while (c2 < 1) {
                printf("Direita\n");
                c2++;
                printf("\n");
            }
        }

    } else if (lado == 2) {
        for (c1 = 1; c1 <= 1; c1++) {
            printf("Frente\n");
            printf("Frente\n");

            c2 = 0;
            while (c2 < 1) {
                printf("Esquerda\n");
                c2++;
                printf("\n");
            }
        }

    } else if (lado == 3) {
        for (c1 = 1; c1 <= 1; c1++) {
            printf("Trás\n");
            printf("Trás\n");

            c2 = 0;
            while (c2 < 1) {
                printf("Direita\n");
                c2++;
                printf("\n");
            }
        }

    } else if (lado == 4) {
        for (c1 = 1; c1 <= 1; c1++) {
            printf("Trás\n");
            printf("Trás\n");

            c2 = 0;
            while (c2 < 1) {
                printf("Esquerda\n");
                c2++;
                printf("\n");
            }
        }
    } else{

            printf("Lado invalido\n");
    }

    break;
   
            
        
    default:
        printf("Peça não implementada.\n");
        break;
    }

    return 0;
} 
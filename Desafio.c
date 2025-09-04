#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int opcao;
    bool rodando = true;

    printf("Bem vindo ao caixa de saque!\n");

    while (rodando) {
        printf("\nDigite a opcao:\n");
        printf("1) Sacar\n");
        printf("2) Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
            int total = 0, valor = 0;

            printf("Digite quanto voce quer sacar: ");
            scanf("%d", &valor);

            if (valor > 2300) {
                printf("O valor limite e de R$ 2300,00!\n");
                continue; // volta ao menu
            }

            while (total != valor) {
                if (total + 100 <= valor) {
                    total += 100;
                    n100++;
                } else if (total + 50 <= valor) {
                    total += 50;
                    n50++;
                } else if (total + 20 <= valor) {
                    total += 20;
                    n20++;
                } else if (total + 10 <= valor) {
                    total += 10;
                    n10++;
                } else if (total + 5 <= valor) {
                    total += 5;
                    n5++;
                } else if (total + 2 <= valor) {
                    total += 2;
                    n2++;
                } else if (total + 1 <= valor) {
                    total += 1;
                    n1++;
                }
            }

            printf("\nSaque de R$%d,00 realizado com:\n", valor);
            printf("%d notas de R$100\n", n100);
            printf("%d notas de R$50\n", n50);
            printf("%d notas de R$20\n", n20);
            printf("%d notas de R$10\n", n10);
            printf("%d notas de R$5\n", n5);
            printf("%d notas de R$2\n", n2);
            printf("%d moedas de R$1\n", n1);

        } else if (opcao == 2) {
            printf("Saindo do caixa...\n");
            rodando = false;
        } else {
            printf("Opcao invalida!\n");
        }
    }

    printf("Obrigado por usar o caixa!\n");
    return 0;
}

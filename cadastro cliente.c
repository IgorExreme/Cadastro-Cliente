#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 100

typedef struct {
    char nome[TAM], sobren[TAM], sobren2[TAM];
} cad;
cad cads[TAM];

int main(){
    int m1, m2, d, m, a, op, op2, op3, i = 0;
    // char nome[TAM], sobren[TAM], sobren2[TAM];
    float n1, n2, taxa, taxa2, conver, t1, t2, l1 = 0, l2 = 0;
    setlocale(LC_ALL, "Portuguese");

    for(i=0; i<TAM; i++) {
        strcpy(cads[i].nome, "NULL");
        strcpy(cads[i].sobren, "NULL");
        strcpy(cads[i].sobren2, "NULL");
}
    do{
        system("cls");
        printf("Escolha uma opção\n");
        printf("1 - Cadastro do clitente\n");
        printf("2 - Lista das operações\n");
        printf("3 - Valor total das operações\n");
        printf("4 - Valor total das taxas\n");
        printf("5 - Sair do programa\n");
        scanf("%d", &op);
        switch(op){
        case 1:
            op2 = 0;
            while(op2 != 2){
            system("cls");
            printf("Digite o nome: ");
            scanf("%s", &cads[i].nome);
            fflush(stdin);
            printf("Digite o sobrenome: ");
            scanf("%s", &cads[i].sobren);
            fflush(stdin);
            printf("A pessoa possui 2 sobrenomes?\n");
            printf("1 - Sim\n");
            printf("2 - Não\n");
            scanf("%d", &op3);
            if(op3 == 1){
                printf("Digite o outro sobrenome: ");
                scanf("%s", &cads[i].sobren2);
                fflush(stdin);
            }
            printf("O mês da operação: ");
            scanf("%d", &m);
            if (m == 2){
                printf("O dia da operação: ");
                scanf("%d", &d);
                if(d < 0 || d > 30){
                    printf("Dia inválido");
                    exit(0);
                }
            }
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
                printf("O dia da operação: ");
                scanf("%d", &d);
                if(d <= 0 || d >= 32){
                    printf("Dia inválido\n");
                    exit(0);
                }
            }
            if(m == 4 || m == 6 || m == 9 || m == 11){
                printf("O dia da operação: ");
                scanf("%d", &d);
                if(d <= 0 || d >= 31){
                    printf("Dia inválido\n");
                    exit(0);
                }
            }
            if(m <= 0 || m >= 13){
                printf("Mês inválido\n");
                exit(0);
            }
            printf("O ano da operação: ");
            scanf("%d", &a);
            printf("Qual a sua moeda de origem?\n");
            printf("1 - Real\n");
            printf("2 - Dólar\n");
            printf("3 - Libra\n");
            printf("4 - Euro\n");
            printf("5 - Peso Argentino\n");
            scanf("%d", &m1);
            if(m1 == 1){
                printf("Qual a sua moeda de destino?\n");
                printf("1 - Dólar\n");
                printf("2 - Libra\n");
                printf("3 - Euro\n");
                printf("4 - Peso Argentino\n");
                scanf("%d", &m2);
                if(m2 == 1 || m2 == 2 || m2 == 3 || m2 == 4){
                printf("Digite o valor da moeda de origem: ");
                scanf("%f", &n1);
                printf("Digte o valor atual da cotação atual da moeda de destino: ");
                scanf("%f", &n2);
                conver = n1 * n2;
                taxa = conver * 0.1;
                taxa2 = taxa + conver;
                }
                printf("Gostaria de fazer novo cadastro?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                scanf("%d", &op2);
            }
                if(m1 == 2){
                printf("Qual a sua moeda de destino?\n");
                printf("1 - Real\n");
                printf("2 - Libra\n");
                printf("3 - Euro\n");
                printf("4 - Peso Argentino\n");
                scanf("%d", &m2);
                if(m2 == 1 || m2 == 2 || m2 == 3 || m2 == 4){
                printf("Digite o valor da moeda de origem: ");
                scanf("%f", &n1);
                printf("Digte o valor atual da cotação atual da moeda de destino: ");
                scanf("%f", &n2);
                conver = n1 * n2;
                taxa = conver * 0.1;
                taxa2 = taxa + conver;
                }
                printf("Gostaria de fazer novo cadastro?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                scanf("%d", &op2);
                }
                if(m1 == 3){
                printf("Qual a sua moeda de destino?\n");
                printf("1 - Real\n");
                printf("2 - Dólar\n");
                printf("3 - Euro\n");
                printf("4 - Peso Argentino\n");
                scanf("%d", &m2);
                if(m2 == 1 || m2 == 2 || m2 == 3 || m2 == 4){
                printf("Digite o valor da moeda de origem: ");
                scanf("%f", &n1);
                printf("Digte o valor atual da cotação atual da moeda de destino: ");
                scanf("%f", &n2);
                conver = n1 * n2;
                taxa = conver * 0.1;
                taxa2 = taxa + conver;
                }
                printf("Gostaria de fazer novo cadastro?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                scanf("%d", &op2);
                }
                if(m1 == 4){
                printf("Qual a sua moeda de destino?\n");
                printf("1 - Real\n");
                printf("2 - Dólar\n");
                printf("3 - Euro\n");
                printf("4 - Peso Argentino\n");
                scanf("%d", &m2);
                if(m2 == 1 || m2 == 2 || m2 == 3 || m2 == 4){
                printf("Digite o valor da moeda de origem: ");
                scanf("%f", &n1);
                printf("Digte o valor atual da cotação atual da moeda de destino: ");
                scanf("%f", &n2);
                conver = n1 * n2;
                taxa = conver * 0.1;
                taxa2 = taxa + conver;
                }
                printf("Gostaria de fazer novo cadastro?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                scanf("%d", &op2);
                }
                if(m1 == 5){
                printf("Qual a sua moeda de destino?\n");
                printf("1 - Real\n");
                printf("2 - Libra\n");
                printf("3 - Euro\n");
                printf("4 - Libra\n");
                scanf("%d", &m2);
                if(m2 == 1 || m2 == 2 || m2 == 3 || m2 == 4){
                printf("Digite o valor da moeda de origem: ");
                scanf("%f", &n1);
                printf("Digte o valor atual da cotação atual da moeda de destino: ");
                scanf("%f", &n2);
                conver = n1 * n2;
                taxa = conver * 0.1;
                taxa2 = taxa + conver;
                }
                printf("Gostaria de fazer novo cadastro?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                }
            }
            system("pause");
            break;

            case 2:
            printf("Nome completo: %s %s %s\n", cads[i].nome, cads[i].sobren, cads[i].sobren2);
            printf("Data da operação: %d/%d/%d\n", d, m, a);
            system("pause");
            break;

            case 3:
            t1 = (float)conver;
            l1 = l1 + t1;
            printf("Total das operações %2.f Reais\n", l1);
            system("pause");
            break;

            case 4:
            t2 = (float)taxa;
            l2 = l2 + t2;
            printf("Total das taxas %2.f Reais\n", l2);
            system("pause");
            break;

            case 5:
            system("cls");
            op = -1;
            break;

            default:
            system("cls");
            printf("!!! Opção Invalida !!!\n");
            system("pause");
            break;
        }
    } while (op != -1);
}

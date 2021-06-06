#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*****
Codado por Pedro Henrique Borges - Engenharia da Computação 1º Periodo - IFTM UBERABA

Faça um algoritmo que receba o número de horas trabalhadas, o valor do
salário-mínimo e o número de horas extras trabalhadas. Calcule e mostre o salário a
receber seguindo as regras a seguir:

a hora trabalhada vale quantos 3% do salário-mínimo;
a hora extra vale 6% do salário-mínimo;
o salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
a quantia a receber pelas horas extras equivale ao número de horas extras
trabalhadas multiplicado pelo valor da hora extra;

o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.

*****/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float horastrabalhadas, salariominimo, horasextras;
    float salarioareceber, valorhora, valorhoraextra;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horastrabalhadas);
    printf("Quanto vale o salário mínimo? ");
    scanf("%f", &salariominimo);
    printf("Quantas horas extras vc trabalhou? ");
    scanf("%f", &horasextras);

    valorhora = (salariominimo*3)/100;
    valorhoraextra = (salariominimo*6)/100;
    salarioareceber  = horastrabalhadas*valorhora;

    printf("\nValor da hora trabalhada: %.2f\n", valorhora);
    printf("Você trabalhou por %.1f hora(s) então vai receber R$ %.2f\n", horastrabalhadas, salarioareceber);
    printf("Como você trabalhou hora-extra, você recebe + R$ %.2f\n", valorhoraextra*horasextras);
    printf("O total a receber eh: R$ %.2f\n\n", (valorhoraextra*horasextras)+salarioareceber);

    system("pause");
    return 0;
}

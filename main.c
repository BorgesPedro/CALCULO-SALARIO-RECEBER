#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*****
Codado por Pedro Henrique Borges - Engenharia da Computa��o 1� Periodo - IFTM UBERABA

Fa�a um algoritmo que receba o n�mero de horas trabalhadas, o valor do
sal�rio-m�nimo e o n�mero de horas extras trabalhadas. Calcule e mostre o sal�rio a
receber seguindo as regras a seguir:

a hora trabalhada vale quantos 3% do sal�rio-m�nimo;
a hora extra vale 6% do sal�rio-m�nimo;
o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
a quantia a receber pelas horas extras equivale ao n�mero de horas extras
trabalhadas multiplicado pelo valor da hora extra;

o sal�rio a receber equivale ao sal�rio bruto mais a quantia a receber pelas horas extras.

*****/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float horastrabalhadas, salariominimo, horasextras;
    float salarioareceber, valorhora, valorhoraextra;

    printf("Digite o n�mero de horas trabalhadas: ");
    scanf("%f", &horastrabalhadas);
    printf("Quanto vale o sal�rio m�nimo? ");
    scanf("%f", &salariominimo);
    printf("Quantas horas extras vc trabalhou? ");
    scanf("%f", &horasextras);

    valorhora = (salariominimo*3)/100;
    valorhoraextra = (salariominimo*6)/100;
    salarioareceber  = horastrabalhadas*valorhora;

    printf("\nValor da hora trabalhada: %.2f\n", valorhora);
    printf("Voc� trabalhou por %.1f hora(s) ent�o vai receber R$ %.2f\n", horastrabalhadas, salarioareceber);
    printf("Como voc� trabalhou hora-extra, voc� recebe + R$ %.2f\n", valorhoraextra*horasextras);
    printf("O total a receber eh: R$ %.2f\n\n", (valorhoraextra*horasextras)+salarioareceber);

    system("pause");
    return 0;
}

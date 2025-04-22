/*
 * Bacharelado em Ciência da Computação
 * Universidade Federal de São Carlos - Campus Sorocaba
 *
 * Disciplina: Laboratório de Programação (1001106 - Turmas A e B)
 * Professor: Cândida Nunes da Silva
 * Semestre: 1º Semestre de 2025
 *
 * Exercício 2 - Aprendizagem: Raízes de Equação de Segundo Grau
 */

/*
 * 1. Problema
 * ------------
 * Escreva um programa em C que recebe da entrada padrão (terminal) três valores
 * inteiros a, b e c que representam os coeficientes da equação de segundo grau:
 *
 * ax² + bx + c = 0
 *
 * O programa deve determinar se a equação possui zero, uma ou duas raízes reais.
 */

/*
 * 2. Entrada
 * ----------
 * A entrada deve ser lida da entrada padrão (teclado).
 * A entrada contém uma única linha com três números inteiros a, b e c,
 * separados por espaços.
 * Restrições: -1000 <= a, b, c <= 1000.
 */

/*
 * 3. Saída
 * --------
 * A saída deve ser escrita na saída padrão (terminal) em uma única linha.
 * O formato da saída varia conforme o número de raízes:
 *
 * - Se não houver raízes reais: "A equacao nao possui raizes reais."
 * - Se houver uma raiz real:   "A equacao possui uma raiz real."
 * - Se houver duas raízes reais: "A equacao possui duas raizes reais."
 *
 * Certifique-se de que haja uma quebra de linha '\n' ao final da frase.
 */

/*
 * 4. Exemplos
 * -----------
 *
 * Exemplo 1:
 * Entrada: 4 4 2
 * Saída:   A equacao nao possui raizes reais.
 *
 * Exemplo 2:
 * Entrada: 1 5 2
 * Saída:   A equacao possui duas raizes reais.
 *
 * Exemplo 3:
 * Entrada: -3 6 -3
 * Saída:   A equacao possui uma raiz real.
 */

/*
 * 5. Desenvolvimento e Apresentação
 * ---------------------------------
 * - Cada aluno deve implementar a sua solução individualmente.
 * - A implementação deve ser feita em C, em um arquivo único.
 * - O nome do arquivo deve seguir o formato: "ex02-apr-nomesn.c", onde "nomesn"
 * é o primeiro nome do aluno seguido das iniciais do sobrenome (tudo em
 * minúsculas, separado por hífen "-").
 * - O juiz online verificará a correção comparando a saída do programa com a
 * saída esperada para diversos casos de teste.
 * - O algoritmo implementado deve estar correto para qualquer entrada válida.
 */

/*
 * 6. Ambiente de Execução e Testes
 * --------------------------------
 * - O programa deve ser compilável em ambiente Unix utilizando o gcc.
 * - Recomenda-se testar em ambiente Unix.
 * - A entrada deve ser lida da entrada padrão (teclado, stdin).
 * - A saída deve ser impressa na saída padrão (terminal, stdout).
 * - Não manipular arquivos diretamente; usar scanf e printf.
 *
 * - Para testar com arquivos de entrada (ex: ex02.in):
 * shell$ ./ex02-apr-nomesn < ex02.in
 *
 * - Para redirecionar a saída para um arquivo (ex: ex02.my.out):
 * shell$ ./ex02-apr-nomesn < ex02.in > ex02.my.out
 *
 * - Para comparar a saída gerada (ex02.my.out) com a esperada (ex02.out):
 * shell$ diff ex02.out ex02.my.out
 * (Se os arquivos forem idênticos, o comando diff não retorna nada).
 */

/*
 * 7. Notas
 * --------
 * - A nota será baseada na correção da solução e na clareza do código.
 * - Receberão nota ZERO os trabalhos que:
 * * Não compilarem em ambiente Unix com gcc.
 * * Apresentarem erro de execução (ex: falha de segmentação).
 * * Não utilizarem entrada e saída padrão.
 * * Apresentarem fortes indícios de plágio (cola).
 */

// Lembre-se de incluir as bibliotecas necessárias, como <stdio.h> e <math.h>
// para usar scanf, printf e possivelmente funções matemáticas para calcular o delta.

// Exemplo de estrutura básica do código:
/*
#include <stdio.h>
#include <math.h> // Para calcular a raiz quadrada (sqrt) no delta, se necessário

int main() {
    int a, b, c;
    double delta; // Delta pode não ser inteiro

    // Ler os coeficientes a, b, c
    scanf("%d %d %d", &a, &b, &c);

    // Calcular o discriminante (delta)
    // delta = b*b - 4*a*c;

    // Verificar as condições do delta para determinar o número de raízes
    // if (delta < 0) {
    //     printf("A equacao nao possui raizes reais.\n");
    // } else if (delta == 0) {
    //     printf("A equacao possui uma raiz real.\n");
    // } else { // delta > 0
    //     printf("A equacao possui duas raizes reais.\n");
    // }

    // Atenção: O cálculo do delta pode causar overflow se a*c for muito grande.
    // No entanto, com as restrições dadas (-1000 <= a, b, c <= 1000),
    // o valor máximo de b*b é 1.000.000 e o valor mínimo de -4*a*c é
    // -4 * 1000 * 1000 = -4.000.000 (se a e c forem positivos) ou
    // -4 * (-1000) * (-1000) = -4.000.000 (se a e c forem negativos).
    // O valor máximo de -4*a*c é -4 * 1000 * (-1000) = 4.000.000.
    // Portanto, delta estará aproximadamente entre -4.000.000 e 5.000.000.
    // Um tipo 'double' ou até mesmo 'long long int' para o delta intermediário
    // (antes da comparação) deve ser suficiente. Usar 'double' é mais seguro.

    delta = (double)b * b - 4.0 * a * c; // Usar double para o cálculo

    if (delta < 0.0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0.0) { // Comparar double com zero pode ser problemático, mas para delta = 0 exato deve funcionar.
                               // Uma alternativa seria verificar se fabs(delta) < epsilon (uma tolerância pequena).
                               // No contexto do exercício, comparar com 0.0 provavelmente é o esperado.
        printf("A equacao possui uma raiz real.\n");
    } else { // delta > 0.0
        printf("A equacao possui duas raizes reais.\n");
    }


    return 0; // Indica que o programa terminou com sucesso
}
*/

#include <stdio.h>

int main () {
    int a, b, c;
    double delta;

    scanf ("%d %d %d", &a, &b, &c);

    delta = (double)b * b - 4.0 * a * c;
    if (delta < 0.0) {
        printf ("A equacao nao possui raizes reais.\n");
    } else if (delta == 0.0) {
        printf ("A equacao possui uma raiz real.\n");
    } else {
        printf ("A equacao possui duas raizes reais.\n");
    }

    return 0;
}
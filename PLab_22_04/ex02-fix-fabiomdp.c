/*
 * Bacharelado em Ciência da Computação
 * Universidade Federal de São Carlos - Campus Sorocaba
 *
 * Instruções sobre o Exercício 2 - Fixação
 * 1001106 - Turmas A e B — Laboratório de Programação
 * Cândida Nunes da Silva
 * 1º Semestre de 2025
 */

/*
 * 1. Problema
 *
 * Escreva um programa em C que recebe da entrada padrão (terminal) três valores inteiros a, b e c
 * que representam os coeficientes da equação de segundo grau:
 *
 * ax² + bx + c = 0
 *
 * O programa deve determinar se a equação possui raízes reais, quantas e quais são.
 */

/*
 * 2. Entrada
 *
 * A entrada deve ser lida da entrada padrão (teclado).
 * A entrada contém uma única linha com três números inteiros a, b e c
 * (-10³ <= a, b, c <= 10³), separados por espaços.
 */

/*
 * 3. Saída
 *
 * A saída deve ser escrita na saída padrão (terminal) em uma única linha.
 * O formato da saída varia conforme o número de raízes:
 *
 * - Se não houver raízes reais:
 * "A equacao nao possui raizes reais."
 *
 * - Se houver uma raiz real (x1):
 * "A equacao possui uma raiz real, que eh x1."
 *
 * - Se houver duas raízes reais (x1 e x2):
 * "A equacao possui duas raizes reais, que sao x1 e x2."
 *
 * Observações:
 * - x1 e x2 representam os valores das raízes, que variam de acordo com a entrada.
 * - Nos casos em que haja duas raízes reais, a de menor valor deve ser listada antes da de maior valor.
 * - Os valores das raízes reais, quando existentes, devem ser expressos com seis casas decimais de precisão.
 * - Certifique-se de que haja uma quebra de linha (`\n`) ao final da frase.
 */

/*
 * 4. Exemplos
 *
 * Exemplo 1:
 * Entrada: 4 4 2
 * Saída: A equacao nao possui raizes reais.
 *
 * Exemplo 2:
 * Entrada: 1 5 2
 * Saída: A equacao possui duas raizes reais, que sao -4.561553 e -0.438447.
 *
 * Exemplo 3:
 * Entrada: -3 6 -3
 * Saída: A equacao possui uma raiz real, que eh 1.000000.
 */

/*
 * 5. Desenvolvimento e Apresentação
 *
 * - Cada aluno deve implementar a sua solução individualmente.
 * - A implementação da solução do problema deve ser em C, em um arquivo único.
 * - O nome do arquivo deve estar no formato "ex02-fix-nomesn.c", onde "nomesn"
 * representa o primeiro nome do aluno seguido das iniciais de seu sobrenome
 * (ex: "joaofs").
 * - Note que todas as letras são minúsculas e o separador é "-" (hífen),
 * e não "_" (underscore).
 * - O juiz online verificará seu programa comparando, para cada um dos casos de teste,
 * se a saída gerada pelo seu programa é igual à saída esperada.
 * - É imprescindível que o algoritmo implementado esteja correto, isto é,
 * retorne a solução esperada para qualquer entrada válida.
 */

/*
 * 6. Ambiente de Execução e Testes
 *
 * - O programa deve ser compilável em ambiente Unix com o compilador gcc.
 * - Sugere-se que os testes também sejam feitos em ambiente Unix.
 * - Deve-se esperar que a entrada seja dada na entrada padrão (teclado) e não por
 * leitura de arquivo. Da mesma forma, a saída deve ser impressa na saída padrão
 * (terminal), e não em arquivo.
 * - A motivação dessa exigência é simplificar a implementação de entrada e saída,
 * permitindo o uso das funções scanf e printf da biblioteca padrão (stdio.h)
 * para leitura e escrita dos dados, sem precisar manipular arquivos.
 *
 * - Redirecionamento em ambiente Unix:
 * Para evitar digitar a entrada manualmente a cada teste, pode-se usar
 * redirecionamento de entrada. Supondo que o arquivo executável seja
 * "ex02-fix-nomesn" e o arquivo de entrada seja "ex02.in":
 *
 * shell$ ./ex02-fix-nomesn < ex02.in
 *
 * Isso executa o programa usando o conteúdo de "ex02.in" como entrada padrão.
 *
 * Também é possível redirecionar a saída para um arquivo, por exemplo, "ex02.my.out":
 *
 * shell$ ./ex02-fix-nomesn < ex02.in > ex02.my.out
 *
 * - Comparação de arquivos de saída:
 * Após gerar o arquivo de saída ("ex02.my.out"), pode-se compará-lo com um
 * arquivo contendo as saídas esperadas ("ex02.out") usando o comando `diff`:
 *
 * shell$ diff ex02.out ex02.my.out
 *
 * Se os arquivos forem idênticos, o comando `diff` não retornará nada.
 * Caso contrário, ele indicará as linhas onde há discrepâncias.
 */

/*
 * 7. Notas
 *
 * - As notas serão baseadas na correção da solução implementada e na clareza do código.
 * - Trabalhos que não atendam aos requisitos mínimos expressos neste documento de forma
 * a inviabilizar o teste do programa receberão nota ZERO. Em particular, receberá
 * nota ZERO todo programa que:
 * - Não compila em ambiente Unix com gcc;
 * - Apresenta erro de execução (ex: segmentation fault);
 * - Não usa entrada e saída padrão para leitura e escrita;
 * - Apresentar fortes indícios de cópia (plágio).
 */

#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c;
    double delta, x1, x2;

    scanf ("%d %d %d", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf ("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2.0 * a);
        printf ("A equacao possui uma raiz real, que eh %.6f.\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        if (x1 > x2) {
            double temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf ("A equacao possui duas raizes reais, que sao %.6f e %.6f.\n", x1, x2);
    }

    return 0;
}
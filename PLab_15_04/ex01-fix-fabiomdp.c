/*
Bacharelado em Ciência da Computação
Universidade Federal de São Carlos - Campus Sorocaba

Instruções sobre o Exercício 1 - Fixação
1001106 - Turmas A e B — Laboratório de Programação

Cândida Nunes da Silva
1o Semestre de 2025

1 Problema

Considere uma matriz 3×3 como por exemplo a matriz
   (  2   3   5 )
   ( -7  -2   4 )
   ( 10   1   3 )

O determinante da matriz é (2·−2·3)+(3·4·10)+(5·−7·1)−(5·−2·10)−(4·1·2)−(3·3·−7) = 228.
De forma geral, o determinante é dado por

   (a00 · a11 · a22) + (a01 · a12 · a20) + (a02 · a10 · a21)
 - (a02 · a11 · a20) - (a12 · a21 · a00) - (a22 · a01 · a10).

Escreva um programa em C que leia nove números inteiros da entrada padrão (terminal) referentes
às células de uma matriz 3×3 e calcula o determinante da matriz.

2 Entrada

A entrada deve ser lida da entrada padrão (teclado). A entrada contém três linhas, cada uma
com três inteiros separados por um espaço, sendo a00, a01 e a02 na primeira linha; a10, a11 e a12
na segunda; e a20, a21 e a22 na terceira. Cada valor da entrada certamente está no intervalo
(−10^3 ≤ aij ≤ 10^3).

3 Saída

A saída deve ser escrita na saída padrão (terminal) em uma linha no seguinte formato:
“O determinante da matriz dada eh d.”
, onde d é o valor do determinante calculado. Certifique-se que tenha uma quebra de linha ao final da frase.

4 Exemplos

Entrada            Saída
2 3 5              O determinante da matriz dada eh 228.
-7 -2 4
10 1 3

Entrada            Saída
1 2 3              O determinante da matriz dada eh 0.
5 10 15
4 5 6

Entrada            Saída
678 -985 763      O determinante da matriz dada eh -1418605089.
-733 234 653
1000 34 999

5 Desenvolvimento e Apresentação

Cada aluno deve implementar a sua solução individual. A implementação da solução do problema
deve ser em C em arquivo único. O nome do arquivo deve estar na forma “ex01-fix-nomesn.c”,
onde “nomesn” representa o primeiro nome do aluno seguido das iniciais de seu sobrenome. Note
que todas as letras são minúsculas e o separador é “-” (hífen) e não “_” (underscore).

O juiz online verificará seu programa comparando para cada um dos casos de teste se a saída
gerada pelo seu programa é igual à saída esperada. É imprescindível que o algoritmo imple-
mentado esteja correto, isto é, retorne a solução esperada para qualquer entrada.

6 Ambiente de Execução e Testes

O programa deve ser compilável em ambiente Unix com gcc. Sugere-se que os testes também sejam
feitos em ambiente Unix. Deve-se esperar que a entrada seja dada na entrada padrão (teclado) e
não por leitura do arquivo de testes. Da mesma forma, a saída deve ser impressa na saída padrão
(terminal), e não em arquivo.

A motivação dessa exigência é apenas simplificar a implementação de entrada e saída, permitindo
o uso das funções scanf e printf da biblioteca padrão para leitura e escrita dos dados, sem
precisar manipular arquivos.

Por outro lado, é evidente que efetivamente entrar dados no teclado é muito trabalhoso. Em
ambiente Unix, é possível usar redirecionamento de entrada na linha de comando de execução para
contornar esse problema. Supondo que o nome do arquivo executável seja análogo ao arquivo fonte,
e “ex01.in” seja o arquivo com os casos de teste, a linha de comando:

shell$ ./ex01-fix-nomesn < ex01.in

executa o programa para todos os casos de teste de uma só vez, retornando todas as saídas
em sequência para o terminal. Novamente, pode-se usar o redirecionamento de saída na linha de
comando para escrever a saída em um arquivo de saída de nome, por exemplo, “ex01.my.out”. A
respectiva linha de comando seria:

shell$ ./ex01-fix-nomesn < ex01.in > ex01.my.out

Após a execução, a comparação pode ser feita usando o comando diff do Unix. Por exemplo,
se o arquivo “ex01.out” contiver as saídas esperadas, a linha de comando:

shell$ diff ex01.out ex01.my.out

serve para comparar automaticamente os dois arquivos, retornando nada caso sejam idênticos
e as linhas onde há discrepâncias caso contrário.

7 Notas

As notas serão baseadas na correção da solução implementada e clareza do código.
Trabalhos que não atendam aos requisitos mínimos expressos neste documento de forma a
inviabilizar o teste do programa receberão nota ZERO. Em particular, receberá nota ZERO todo
programa que:
• não compila em ambiente Unix;
• dá erro de execução;
• não usa entrada e saída padrão para leitura e escrita;
• apresentar fortes indícios de cola.
*/

#include <stdio.h>

int main() {
    int a00, a01, a02, a10, a11, a12, a20, a21, a22;

    scanf("%d %d %d", &a00, &a01, &a02);
    scanf("%d %d %d", &a10, &a11, &a12);
    scanf("%d %d %d", &a20, &a21, &a22);

    int det = (a00 * a11 * a22) + (a01 * a12 * a20) + (a02 * a10 * a21)
              - (a02 * a11 * a20) - (a12 * a21 * a00) - (a22 * a01 * a10);

    printf("O determinante da matriz dada eh %d.\n", det);
    
    return 0;
}
/*
 * Instruções sobre o Exercício 1 - Aprendizagem
 * 1001106 - Turmas A e B — Laboratório de Programação
 * Cândida Nunes da Silva
 * 1º Semestre de 2025
 *
 * 1. Problema
 * Considere uma matriz 2 × 2 como por exemplo a matriz:
 * ( 2  3 )
 * ( -7 -2 )
 * O determinante da matriz é (2 * -2) - (3 * -7) = 17.
 * De forma geral, o determinante é dado por: (a00 * a11) - (a01 * a10).
 * 
 * Escreva um programa em C que lê quatro números inteiros da entrada padrão (terminal)
 * referentes às células de uma matriz 2 × 2 e calcula o determinante da matriz.
 *
 * 2. Entrada
 * A entrada deve ser lida da entrada padrão (teclado). A entrada contém duas linhas,
 * cada uma com dois inteiros separados por um espaço, sendo a00 e a01 na primeira linha
 * e a10 e a11 na segunda.
 * Cada valor da entrada certamente está no intervalo (−10^3 ≤ aij ≤ 10^3).
 *
 * 3. Saída
 * A saída deve ser escrita na saída padrão (terminal) em uma linha no seguinte formato:
 * “O determinante da matriz dada eh d.”, onde d é o valor do determinante calculado.
 * Certifique-se de que haja uma quebra de linha ao final da frase.
 *
 * 4. Exemplos
 * Entrada             | Saída
 * --------------------|-------------------------------
 * 2 3                 | O determinante da matriz dada eh 17.
 * -7 -2
 *
 * 1 2                 | O determinante da matriz dada eh 0.
 * 5 10
 *
 * 678 -985            | O determinante da matriz dada eh -563353.
 * -733 234
 *
 * 5. Desenvolvimento e Apresentação
 * Cada aluno deve implementar sua solução indnstru¸c˜oes sobre o Exerc´ıcio 1 - Aprendizagem
1001106 - Turmas A e B — Laborat´orio de Programa¸c˜ao
Cˆandida Nunes da Silva
1o Semestre de 2025
1 Problema
Considere uma matriz 2 × 2 como por exemplo a matriz
( 2 3
−7 −2
)
O determinante da matriz ´e (2 · −2) − (3 · −7) = 17. De forma geral, o determinante ´e dado por
(a00 · a11) − (a01 · a10).
Escreva um programa em C que lˆe quatro n´umeros inteiros da entrada padr˜ao (terminal) refe-
rentes `as c´elulas de uma matriz 2 × 2 e calcula o determinante da matriz.
2 Entrada
A entrada deve ser lida da entrada padr˜ao (teclado). A entrada cont´em duas linhas, cada uma com
dois inteiros separados por um espa¸co, sendo a00 e a01 na primeira linha e a10 e a11 na segunda.
Cada valor da entrada certamente est´a no intervalo (−103 ≤ aij ≤ 103).
3 Sa´ıda
A sa´ıda deve ser escrita na sa´ıda padr˜ao (terminal) em uma linha no seguinte formato “O determi-
nante da matriz dada eh d.”, onde d ´e o valor do determinante calculado. Certiﬁque-se que tenha
uma quebra de linha ao ﬁnal da frase.
4 Exemplos
Entrada Sa´ıda
2 3 O determinante da matriz dada eh 17.
-7 -2
Entrada Sa´ıda
1 2 O determinante da matriz dada eh 0.
5 10
Entrada Sa´ıda
678 -985 O determinante da matriz dada eh -563353.
-733 234
5 Desenvolvimento e Apresenta¸c˜ao
Cada aluno deve implementar a sua solu¸c˜ao individual. A implementa¸c˜ao da solu¸c˜ao do problema
deve ser em C em arquivo ´unico. O nome do arquivo deve estar na forma “ex01-apr-nomesn.c”,
onde “nomesn” representa o primeiro nome do aluno seguido das iniciais de seu sobrenome. Note
que todas as letras s˜ao min´usculas e o separador ´e “-” (h´ıfen) e n˜ao “ ” (underscore).
O juiz online veriﬁcar´a seu programa comparando para cada um dos casos de teste se a sa´ıda
gerada pelo seu programa ´e igual `a sa´ıda esperada. ´E imprescind´ıvel que o algoritmo imple-
mentado esteja correto, isto ´e, retorne a solu¸c˜ao esperada para qualquer entrada.
6 Ambiente de Execu¸c˜ao e Testes
O programa deve ser compil´avel em ambiente Unix com gcc. Sugere-se que os testes tamb´em sejam
feitos em ambiente Unix. Deve-se esperar que a entrada seja dada na entrada padr˜ao (teclado) e
n˜ao por leitura do arquivo de testes. Da mesma forma, a sa´ıda deve ser impressa na sa´ıda padr˜ao
(terminal), e n˜ao em arquivo.
A motiva¸c˜ao dessa exigˆencia ´e apenas simpliﬁcar a implementa¸c˜ao de entrada e sa´ıda, permi-
tindo o uso das fun¸c˜oes scanf e printf da biblioteca padr˜ao para leitura e escrita dos dados, sem
precisar manipular arquivos.
Por outro lado, ´e evidente que efetivamente entrar dados no teclado ´e muito trabalhoso. Em
ambiente Unix, ´e poss´ıvel usar redirecionamento de entrada na linha de comando de execu¸c˜ao para
contornar esse problema. Supondo que o nome do arquivo execut´avel seja an´alogo ao arquivo fonte,
e “ex01.in” seja o arquivo com os casos de teste, a linha de comando:
shell$ ./ex01-apr-nomesn < ex01.in
executa o programa para todos os casos de teste de uma s´o vez, retornando todas as sa´ıdas
em sequˆencia para o terminal. Novamente, pode-se usar o redirecionamento de sa´ıda na linha de
comando para escrever a sa´ıda em um arquivo de sa´ıda de nome, por exemplo, “ex01.my.out”. A
respectiva linha de comando seria:
shell$ ./ex01-apr-nomesn < ex01.in > ex01.my.out
Ap´os a execu¸c˜ao, a compara¸c˜ao pode ser feita usando o comando diff do Unix. Por exemplo,
se o arquivo “ex01.out” cont´em as sa´ıdas esperadas, a linha de comando:
shell$ diff ex01.out ex01.my.out
serve para comparar automaticamente os dois arquivos, retornando nada caso sejam idˆenticos
e as linhas onde h´a discrepˆancias caso contr´ario.ividual. A implementação da solução
 * do problema deve ser em C em um único arquivo.
 * O nome do arquivo deve estar na forma “ex01-apr-nomesn.c”,
 * onde “nomesn” representa o primeiro nome do aluno seguido das iniciais de seu sobrenome.
 * Note que todas as letras são minúsculas e o separador é “-” (hífen) e não “_” (underscore).
 *
 * O juiz online verificará seu programa comparando para cada um dos casos de teste se a saída
 * gerada pelo seu programa é igual à saída esperada. É imprescindível que o algoritmo implementado
 * esteja correto, ou seja, retorne a solução esperada para qualquer entrada.
 *
 * 6. Ambiente de Execução e Testes
 * O programa deve ser compilável em ambiente Unix com gcc.
 * Sugere-se que os testes também sejam feitos em ambiente Unix.
 * Deve-se esperar que a entrada seja dada na entrada padrão (teclado)
 * e não por leitura de arquivo. Da mesma forma, a saída deve ser impressa na
 * saída padrão (terminal), e não em arquivo.
 *
 * Em ambiente Unix, é possível usar redirecionamento de entrada na linha de comando para facilitar.
 * Supondo que o nome do executável seja análogo ao nome do arquivo fonte e “ex01.in” seja
 * o arquivo com os casos de teste, a linha de comando:
 *
 *   shell$ ./ex01-apr-nomesn < ex01.in
 *
 * executa o programa com todos os casos de teste de uma vez, mostrando todas as saídas no terminal.
 * Para redirecionar a saída para um arquivo:
 *
 *   shell$ ./ex01-apr-nomesn < ex01.in > ex01.my.out
 *
 * Após a execução, pode-se comparar os arquivos com o comando diff:
 *
 *   shell$ diff ex01.out ex01.my.out
 *
 * O comando retorna nada se forem idênticos, ou mostra as diferenças caso existam.
 */

 #include <stdio.h>

 int main() {
        int a00, a01, a10, a11;

        scanf("%d %d", &a00, &a01);
        scanf("%d %d", &a10, &a11);

        int det = (a00 * a11) - (a01 * a10);

        printf("O determinante da matriz dada eh %d.\n", det);
        return 0;
 }
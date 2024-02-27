# C - Básico:

Dados em C podem ser declarados em:

* Inteiros (int): variáveis do tipo inteiros (positivos e negativos)                                          
* Reais (float): Variáveis decimais (6 casas decimais)    
* Caracter (char): Variáveis com caracteres (Caracteres, Símbolos e Pontuações)                               
* Real de precisão (double): Variáveis dcimais com mais casas                                             
* Sem valor (void)

Comentários são adicionados com: // ou texto entre /* */

Ver: TiposDeDadosEComentarios.c

## Operadores de Atribuição:

Função | Símbolo
-|-
Atribui  | =                                               
Soma e atribui | +=                                 
Subtrai e atribui | -=                                
Multiplica e atribui | *=                              
Divide e atribui | /=                                  
Divide e atribui o resto | %= 

Incremento e Decremento Unitário:
Se x = 5

x-- = 4
x++ = 6

Ver: OperadoresEAtribuicao.c

## Operadores Relacionais:

Função Relacional | Símbolo
-|-
Igual a | ==                                            
Diferente de | !=                                    
Menor que | <                                          
Maior que | \>                                       
Menor ou igual | <=                     
Maior ou igual | \>= 

## Operadores Lógicas:

Função Lógica | Símbolo
--------------|--------
Conjunção (E) | &&                               
Disjunção (OU) | ||                              
Negação (Não) | !                                

## printf()

Comando para exibir dados na tela.                      
Alguns comando para exibir variáveis.

### Tipos de Dados

Tipo | Símbolo
-----|--------
Inteiro | %d
Real | %f
Caracter | %c
Notação Científica | %e
Octal | %o
Hexadecimal | %x
String | %s
Inteiro sem sinal | %u
Escreve o símbolo % | %%

Para alinhar dados dentro da função printf, usar valores entre % e o formato.

Para alinhar à direita: %5f
Para alinhar à esquerda: %-5f
Número de casas decimais: %.2f (2 casas)

Ver: Printf.c

## scanf():

Permite ler dados do teclado. Exige que as variáveis usem &.

Pode ser usado com getchar() para ignorar o enter do teclado.

Ver: Scanf.c

## Seleção simples:

Objetivo: testar uma condição antes de executar uma instrução. 

Utiliza-se a função if(condição).

ver: selecao_simples.c

## Seleção composta:

Usada quando uma mesma condição existem duas alternativas: uma verdadeira e uma falsa.

Utiliza-se a função if(condição) e else.

ver: selecao_composta.c

## Seleção Encadeada:

Usada quando há condições dentro de condições.

Utiliza-se a função if(condição) e else.

ver: selecao_encadeada.c

## Seleção de Múltipla escolha:

Permite escolher uma variável e selecionar um entre os possíveis valores.

Utiliza-se a função switch(variável).

ver: selecao_multipla.c

## Estruturas de Repetição:

Laçoes de repetição.

Utilizam-se as funções: while() ou for()

### Repetição com teste no início:

Função: while()

Ver: while.c

### Repetição com teste no final:

Função: do e while()

Ver: do.c

### Repetição com variável de controle:

Função: for()

Ver: for.c

## Vetores:

Um vetor é uma estrutura de dados composta por
um conjunto de variáveis com o mesmo tipo

É formado por uma seqüência de variáveis, todas
do mesmo tipo, com o mesmo identificador,
alocadas seqüencialmente na memória.

Apesar das variáveis do vetor possuírem o mesmo
nome, distingue-se as mesmas através de índices

### Declaração de Vetores em C:

O vetor é composto do tipo, sendo o tipo de variável que irá compor, identificador, sendo nome do vetor e tamanho, sendo a quantidade de elementos.

Armazenamento Dados em Vetores:

Utiliza-se os índices para indicar a posição do vetor que se deseja.

Ver: vetores.c

### Strings em C:

String em C é um vetor do tipo char.

A função scanf() lê os dados do teclado até encontrar caractere espaço.

Última posição do vetor sempre deve conter o caractere especial '\o' ou NULL.

Para fazer leitura de textos do teclado, usar a função fgets(variável, tamanho da string, qual input)

Funções para manipulação de string com a biblioteca string.h:

strlen(vetor): exibe o tamanho da string.               
strcat(vetor_1,vetor_2): concatena dois vetores.        
strcpy: copia um vetor                                  
strcmp(vetor_1,vetor_2): compara dois vetores

Ver: strings.c

## Matrizes:

Dois índices para fazer referência às posições, sendo linha e coluna respectivamente.

Para aumentar a dimensão das matrizes, pode-se aumentar a quantidade de índices de referência de posições.

Ver: matrizes.c

## Estruturas:

Estrutura é um conjunto de dados que podem ter tipos diferentes

Estruturas podem ser usadas como tipos definidos ocm a função typedef. Esta função permite criar sinônimos para tipos de dados existentes.

Estruturas podem ser declaradas como vetores de estuturas.

Ver: estrutura.c

## Ponteiros

Ponteiros, em C, armazenam o endereço de memória, que é a localização de outra variável.

* & obtem o endereço
* \* obtem o conteudo

Printar o endereço de memória de uma variável, usar &.

### Operação com ponteiros

Quando há a referência de ponteiros para variáveis, a alteração da variável ou do ponteiro alterará ambos.

### Ponteiros com Vetores e Matrizes

Ponteiros aponterão para o primeiro espaço de memória do vetor ou da matriz

### Ponteiros para Ponteiros

Ponteiros podem apontar para ponteiros.

Ver: ponteiro.c

## Funções e Modularização

Uma função é um subprograma responsável por executar uma tarefa bem definida. A função deve ser declarada fora do main.

As funções possuem parâmetros e, quando fazer a chamada de uma função, o parâmetro pode ser passado por referência.

A passagem de referência consiste em mandar o endereço da variável no parâmetro.

Funções podem receber vetores e matrizes em parâmetro.

Funções recursivas são funções que possuem chamadas para ela mesma

Ver: FuncoesEModularizacao.c

## Alocação Dinâmica

Incluir a biblioteca stdlib.h

### Memória Stack

Consiste em uma área de memória que aloca variáveis quando uma função é chamada e desaloca quando a função termina. Memória local da função.

### Memória Heap

Consiste em uma porção da memória principal usada para alocação dinâmica de variáveis durante a execução do programa. O gerenciamento dessa memória (alocação
e desalocação) deve ser feito manualmente pelo programa.

### Funções de Alocação

* malloc()
* calloc()
* free()

### Malloc()

* Recebe como argumento um número positivo que representa a quantidade de bytes de memória desejada. 
* Retorna um ponteiro void para o primeiro byte do novo bloco de memória que foi alocado. 
* Se não houver memória suficiente para alocar, a função retorna um ponteiro para NULL.

### Calloc()

* Aloca um vetor de elementos inicializados com zero. 
* Recebe como parâmetro, além da quantidade de memória de cada item, o número de itens a serem alocados.

### Free()

* A função free() libera o espaço alocado na memória heap.
* Necessário chamar sempre que malloc() ou calloc() for utilizado!

### Alocação dinâmica de matrizes

* Realizado em duas partes:
1. Primeiro aloca-se um vetor de ponteiros, que representa o número de linhas da matriz
2. Depois, para cada linha, aloca-se o vetor correspondente às colunas

Ver: AlocDinamica.c

## Arquivos:

Em C, as infomações necessárias sobre o arquivo são armazenadas em uma estrutura do tipo FILE, definida na
biblioteca stdio.h

### fopen()

A função fopen() executa duas tarefas:
1. Cria e preenche uma estrutura FILE contendo as informações sobre o arquivo para que o programa e o SO possam se comunicar
2. Retorna um ponteiro do tipo FILE que aponta para a localização na memória dessa estrutura criada

Tal ponteiro é usado pelo programa para ler/
gravar dados no arquivo.

### Modos de abertura de arquivos

Símbolo | Significado
--------|------------
r | Abre o arquivo para leitura. O arquivo deve existir.
w | Abre o arquivo para escrita. Se o arquivo já existir, seu conteúdo será apagado. Se o arquivo não existir, ele será criado.
a | Abre o arquivo para escrita. Os dados serão adicionados ao final do arquivo. Se o arquivo não existir, ele será criado.
r+ | Abre o arquivo para leitura e escrita. O arquivo deve existir.
w+ | Abre o arquivo para leitura e escrita. Se o arquivo já existir, seu conteúdo será apagado. Se o arquivo não existir, ele será criado.
a+ | Abre o arquivo para leitura e escrita. Os dados serão adicionados ao final do arquivo. Se o arquivo não existir, ele será criado.
rb | Abre o arquivo para leitura em modo binário. O arquivo deve existir.
wb | Abre o arquivo para escrita em modo binário. Se o arquivo já existir, seu conteúdo será apagado. Se o arquivo não existir, ele será criado.
ab | Abre o arquivo para escrita em modo binário. Os dados serão adicionados ao final do arquivo. Se o arquivo não existir, ele será criado.
rb+ | Abre o arquivo para leitura e escrita em modo binário. O arquivo deve existir.
wb+ | Abre o arquivo para leitura e escrita em modo binário. Se o arquivo já existir, seu conteúdo será apagado. Se o arquivo não existir, ele será criado.
ab+ | Abre o arquivo para leitura e escrita em modo binário. Os dados serão adicionados ao final do arquivo. Se o arquivo não existir, ele será criado.

Função de Arquivo | Significado
------------------|------------
fputc() | Grava um caractere em um arquivo
fputs() | Grava uma string em um arquivo
fprintf() | Grava dados de todos os tipos em um arquivo
fgetc() | Lê um caractere de um arquivo
fgets() | Lê uma string de um arquivo
fscanf() | Lê dados de qualquer tipo de um arquivo
fclose() | Fecha um arquivo
fwrite() | Grava um bloco de dados em um arquivo
fread() | Lê um bloco de dados de um arquivo
fflush() | Descarrega o buffer de saída de um arquivo
rewind() | Reposiciona o ponteiro de leitura/escrita no início do arquivo
fseek() | Reposiciona o ponteiro de leitura/escrita em qualquer posição do arquivo
ftell() | Retorna a posição atual do ponteiro de leitura/escrita no arquivo

Ver: Arquivos.c
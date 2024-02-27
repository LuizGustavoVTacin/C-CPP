# C++ Básico

A biblioteca padrão a ser importada para a exibição de saídas na tela é a **iostream**. Ela é equivalente a stdio de C.

## std::

### **std::cout <<**

A função exibirá variáveis na tela, desde que dentro de \"\". 

Importante notar que >> indica saída na tela.

Para exibir valores dentro das variáveis, usar std::endl no fim

### **std::cin >>**

A função receberá entrada do usuário

O operador usado para isso é <<

Ver: std.cpp

### **Propriedades em std::**


Sequência | Descrição
-|-
\n | Nova linha
\t | Tabulação normal
\r | Posiciona o cursor no início da linha
\a | Alerta (Aviso sonoro)
\\\\ | Imprime barra invertida
\\' | Imprime aspas simples
\\" | Imprime aspas duplas

## **Using**

utilizar a função using para definir os tipos de std:: permitir omitir std:: toda vez que utilizar cout, cin, endl, etc...

## **if**

A comparação é semelhante ao que é feito em C, porém não há necessidade de adicionar {}.

Ver: if_using.cpp

## **Classes e Objetos**

A classe é declarada entre {} e com o tipo de acesso especificado no cabeçalho.

private pode ser acessado por métodos internos à classe.

A vantagem de se utilizar set e get é que a variável pode ser declarada como private.

Um construtor deve possuir o mesmo nome da classe.

Ver: classe_objeto_set_get.cpp e class_objeto_construtor.cpp

## **While**

while é o mesmo de sempre. O loop pode ser interrompido quando o contador atingir a condição de parada. Outra forma é a chamada repetição controlada por sentinela, onde o loop é interrompido quando o usuário digitar um valor específico. 

Ver: while.cpp

## Operadores de atribuição

Operador de atribuição | Exemplo | Explicação
-----------------------|---------|------------
= | x = 5 | x recebe 5
+= | x += 3 | x = x + 3
-= | x -= 3 | x = x - 3
*= | x *= 3 | x = x * 3
/= | x /= 3 | x = x / 3
%= | x %= 3 | x = x % 3


### Operadores de incremento e decremento

Operador de incremento | Exemplo | Explicação
-----------------------|---------|------------
Pré-incremento | ++x | Incrementa 1 ao valor de x, então utiliza x
Pré-decremento | --x | Decrementa 1 ao valor de x, então utiliza x
Pós-incremento | x++ | Utiliza x, então incrementa 1 ao valor de x
Pós-decremento | x-- | Utiliza x, então decrementa 1 ao valor de x

## for

```
for( Nome da variável de controle; Valor Final da variável de controle; Incremento da variável de controle){
    //Comandos
}
```

Ver: for.cpp

## \<cmath\>, std::setw e std::setprecision

A biblioteca \<math\> introduz funções matemáticas, como sqrt, pow, sin, cos, tan, log, exp, etc. 

setprecision e setw são funções da biblioteca \<iomanip\> que definem a precisão e o tamanho de um número, respectivamente.

### Funções de cmath

Função | Descrição
-|-
ceil(x) | Retorna o menor inteiro maior ou igual a x
cos(x) | Retorna o cosseno de x
exp(x) | Retorna e^x
fabs(x) | Retorna o valor absoluto de x
floor(x) | Retorna o maior inteiro menor ou igual a x
fmod(x, y) | Retorna o resto da divisão de x por y
log(x) | Retorna o logaritmo natural de x
log10(x) | Retorna o logaritmo de x na base 10
pow(x, y) | Retorna x^y
sin(x) | Retorna o seno de x
sqrt(x) | Retorna a raiz quadrada de x
tan(x) | Retorna a tangente de x

Ver: math.cpp

## do...while

Testa a condição de continuação do loop depois de o corpo do loop executar. Portanto, o corpo do loop sempre é executado pelo menos uma vez.

Ver: DoWhile.cpp

## Switch

switch realiza uma comparação de igualdade entre uma variável e uma lista de valores constantes. Se uma correspondência for encontrada, o bloco de código associado será executado. Se não houver correspondência, o bloco de código padrão será executado.

Ver: Switch.cpp

## Break e Continue

### Break

O comando break é usado para interromper o loop e continuar a execução do programa a partir do próximo comando.

Ver: Break.cpp

### Continue

O comando continue é usado para interromper a iteração atual do loop e continuar a execução do programa a partir do próximo comando.

Ver: Continue.cpp

## Operadores Lógicos

Função | Operador
:---: | :---:
E | &&
OU | \|\|
NÃO | !

## Funções

### Funções com parâmetros

Ver: Funcoes.cpp

## Arquivos de Cabeçalho

Arquivo | Conteúdo
-|-
\<iostream\> | Entrada e saída padrão
\<iomanip\> | Entrada e saída de dados formatados
\<cmath\> | Funções matemáticas
\<cstdlib\> | Funções de conversão de tipos, geração de números aleatórios, alocação de memória, controle de processos, etc.
\<ctime\> | Funções de manipulação de tempo e data
\<vector\>,\<list\>,\<deque\>,\<queue\>,\<stack\>,\<set\>,\<map\>,\<bitmap\> | Bibliotecas de contêineres
\<cctype\> | Contém funções para manipulação de caracteres
\<cstring\> | Contém protótipos de função para funções de processamento de strings
\<typeinfo\> | Contém classes para identificação de tipos em tempo real
\<exception\>, \<stdexcept> | Funções de manipulação de exceções
\<memory\> | Funções de manipulação de memória
\<fstream\> | Contém protótipos de funções para funções que realizam I/O em arquivos
\<sstream\> | Contém protótipos de funções para funções que realizam I/O em strings
\<string\> | Classe string em C++
\<functional\> | Contém classes e funções de algoritmos
\<iterator\> | Contém classes para acessar elementos de contêineres
\<algorithm\> | Contém funções para manipular dados em contêineres
\<cassert\> | Contém macros para depuração
\<cfloat\> | Contém os limites de tamanho de ponto flutuante do sistema
\<climits\> | Contém os limites de tamanho inteiros do sistema
\<cstdio\> | Contém protótipos de funções de biblioteca I/O no estilo C.
\<locale\> | Contém classes e funções para manipular localidades
\<limits\> | Contém classes para definir os limites de tipos de dados numéricos em cada plataforma de computador
\<utility\> | Contém classes e funções utilizadas por muitos arquivos de cabeçalho padrão

## Classes de armazenamento

### static

A classe de armazenamento static é usada para definir uma variável ou função que é visível apenas para o arquivo atual.

### extern

A classe de armazenamento extern é usada para dar uma referência externa de uma variável ou função que é visível para todos os programas do arquivo.

### register

A classe de armazenamento register é usada para definir variáveis que devem ser armazenadas em um registro de CPU em vez de RAM. Isso significa que a variável possui um tamanho máximo igual ao tamanho de um registrador (geralmente um word) e não pode ter o operador unário '&' aplicado a ele (já que não possui um endereço de memória).

### mutable

A classe de armazenamento mutable se aplica apenas a membros não estáticos de uma classe. Ela permite que um membro de dados de uma estrutura ou classe que seja declarado como mutable, mesmo que o objeto seja declarado como const.


### auto

A classe de armazenamento auto informa ao compilador para usar o tipo de dados da variável inicializadora para declarar uma variável, em vez de qualquer tipo de dados especificado em sua declaração.

## Arrays e Vetores

### Arrays

Ver: Arrays.cpp

## Ponteiros e Strings baseadas em ponteiros

### Declaração de variável ponteiro e inicialização

```
int *ponteiro;
```

### Operadores de ponteiro

Operador endereço (&)

Ver: Ponteiros.cpp


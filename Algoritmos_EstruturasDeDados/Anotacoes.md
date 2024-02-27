# Algoritmos e Estruturas de Dados

## Sumário

<a name="item"></a>

1. [**Introduction**](#item1)
1.1. [**Recursion**](#item11)
1.2. [**C++ Classes**](#item12)
1.3. [**C++ Details**](#item13)
1.4. [**Templates**](#item14)
1.5. [**Matrices**](#item15)
2. [**Algorithm Analysis**](#item2)
2.1. [**Model**](#item21)
2.2. [**Running Time Calculations**](#item22)
3. [**Lists, Stacks e Queues**](#item3)
3.1. [**Abstract Data Types**](#item31)
3.2. [**List ADT**](#item32)
3.3. [**Implementation of Vector e List**](#item33)
3.4. [**Stacks ADT**](#item34)
3.5. [**Queue ADT**](#item35)
4. [**Trees**](#item4)
4.1. [**Binary Tree**](#item41)
4.2. [**Binary Search Tree**](#item42)
4.3. [**AVL Tree**](#item43)
4.4. [**Splay Tree**](#item44)
4.5. [**B-Trees**](#item45)
4.6. [**Sets e Maps**](#item46)
5. [**Hashing**](#item5)
5.1. [**Hashing Function**](#item51)
5.2. [**Separate Chaining**](#item52)
5.3. [**Hashing without Linked Lists**](#item53)
5.4. [**Rehashing**](#item54)
6. [**Priority Queues**](#item6)
6.1. [**Binary Heap**](#item61)
6.2. [**Priority Queue**](#item62)
6.3. [**d-Heaps**](#item63)
6.4. [**Leftlist Heap**](#item64)
6.5. [**Skew Heap**](#item65)
6.6. [**Binomial Queue**](#item66)
7. [**Sorting**](#item7)
7.1. [**Insertion Sort**](#item71)
7.2. [**Shell Sort**](#item72)
7.3. [**Heap Sort**](#item73)
7.4. [**Merge Sort**](#item74)
7.5. [**Quick Sort**](#item75)
7.6. [**Radix Sort**](#item76)
7.7. [**Indirect Sorting**](#item77)
7.8. [**Bucket Sort**](#item78)
7.9. [**External Sorting**](#item79)
8. [**Disjoint-Set Class**](#item8)
8.1. [**Smart Union Algorithms**](#item81)
8.2. [**Union-Find**](#item82)
9. [**Graph Algorithms**](#item9)
9.1. [**Topological Sort**](#item91)
9.2. [**Shortest-Path Algorithms**](#item92)
9.3. [**Network Flow Problemas**](#item93)
9.4. [**Minimum Spanning Trees**](#item94)
9.5. [**Depth-First Seach**](#item95)
9.6. [**NP- Completeness (Nondeterministic Polynomial-Complete)**](#item96)
10. [**Algorithm Design Techniques**](#item10)
10.1. [**Greedy Algorithms**](#item101)
10.2. [**Divide-and-Conquer**](#item102)
10.3. [**Dynamic Programming**](#item103)
10.4. [**Backtracking**](#item104)
10.5. [**Randomized Algorithms**](#item105)
11. [**Amortized Analysis**](#item11)
11.1. [**Binomial Queues**](#item111)
11.2. [**Skew Heaps**](#item112)
11.3. [**Splay Trees**](#item113)
11.4. [**Fibonacci Heaps**](#item114)
12. [**Advanced Data Structures and Implementation**](#item12)
12.1. [**Top-Dow Splay Trees**](#item121)
12.2. [**Red-Black Trees**](#item122)
12.3. [**Deterministic Skip Lists**](#item123)
12.4. [**AA-Trees**](#item124)
12.5. [**Treaps**](#item125)
12.6. [**K-Dimensional Search Trees**](#item126)
12.7. [**Pairing Heaps**](#item127)

<a id="item1"></a>
## Introdução

<a id="item11"></a>
### Recursion

Funções recursivas são construídas de forma a apresentar um caso base e um caso recursivo. O caso base é a condição que faz com que a função retorne um valor, enquanto o caso recursivo é a condição que faz com que a função chame a si mesma.

```
int f(int x){
    if ( x == 0)
        return 0;
    else
        return 2 * f(x - 1) + x * x;
}
```

Funções recursivas para cálculos matemáticos é, usualmente, uma opção ruim.

<a id="item12"></a>
### C++ Classes

<a id="item13"></a>
### C++ Details

<a id="item14"></a>
### C++ Templates

<a id="item15"></a>
### Matrices

<a id="item2"></a>
## Análise de Algoritmos

<a id="item3"></a>
## Listas, Filas e Pilhas

<a id="item4"></a>
## Árvores

<a id="item5"></a>
## Hashing

<a id="item6"></a>
## Filas Prioritárias

<a id="item7"></a>
## Ordenação

<a id="item8"></a>
## Disjoint-Set Class

<a id="item9"></a>
## Grafos

<a id="item10"></a>
## Técnicas de Design de Algortimos

<a id="item11"></a>
## Análise Amortizada

<a id="item12"></a>
## Estruturas de Dados Avançadas
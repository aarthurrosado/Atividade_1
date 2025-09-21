# Estruturas de Dados Básicas (IMD0029)

Repositorio para a atividade_1 de estrutura de dados

---

## compilacao e testes
no powershell implemente ->
g++ -Wall -Wextra -g3 -Iinclude_cpp src_cpp/*.cpp test_cpp/test_algorithms.cpp -o output/test_cpp.exe

depois rode 


.\output\test_cpp.exe


## Funcoes implementadas 
busca_binaria

Arquivo: src_cpp/busca_binaria.cpp
Cabeçalho: include_cpp/busca_binaria.hpp

Descrição: Implementa a busca binária para encontrar elementos em vetores ordenados.

Complexidade: Θ(log n)

 busca_seq_ordenada

Arquivo: src_cpp/busca_seq_ordenada.cpp

Cabeçalho: include_cpp/busca_seq_ordenada.hpp

Descrição: Implementa a busca sequencial adaptada para vetores ordenados.

Complexidade: Θ(n)

 recursao

Arquivo: src_cpp/recursao.cpp
Cabeçalho: include_cpp/recursao.hpp

Descrição: Função recursiva que percorre strings contando quantas vezes foi detectado aquele caracter.

Complexidade: Θ(n)

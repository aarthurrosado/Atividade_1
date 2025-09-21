#include <iostream>
#include <iomanip>
#include <vector>
#include "busca_binaria.hpp"
#include "recursao.hpp"
#include "busca_seq_ordenada.hpp"

#define RUN_TEST(name, expr, expected)                                 \
    do {                                                               \
        int result = (expr);                                           \
        std::cout << std::left << std::setw(25) << name                \
                  << ": " << ((result == (expected)) ? "OK" : "FAIL")  \
                  << std::endl;                                        \
    } while(0)

extern int bad;
int main() {
    // Configuracao 5.1
    int n = 10;
    bad = 6;
    RUN_TEST("versao defeituosa", busca_binaria(n), bad);

    bad = 1;
    RUN_TEST("versao defeituosa", busca_binaria(n), bad);

    bad = 5;
    RUN_TEST("versao defeituosa", busca_binaria(n), bad);

    // Configuracao 5.2
    int arr1[] = {4, 3, 3, 2, 2, 1, 1, 3, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    RUN_TEST("Equipes iguais", conta_especialidades_distintas(arr1, n1), 4);

    int arr2[] = {2, 2, 2, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    RUN_TEST("Equipes iguais", conta_especialidades_distintas(arr2, n2), 1);

    int arr3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    RUN_TEST("Equipes iguais", conta_especialidades_distintas(arr3,n3), 5);

    // Configuracao 5.3

    RUN_TEST("Recursao", recursao("abacaxi", 'a'), 3);
    RUN_TEST("Recursao", recursao("banana", 'n'), 2);
    

    return 0;
}


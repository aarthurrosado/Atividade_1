#include "busca_binaria.hpp"

// Busca binaria padrao
int busca_binaria_Padrao(const int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;
     // [1, 2, 3, 4, 5 , 6]
     //  0  1  2  3  4   5
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vetor[meio] == chave) // acabou
        {
            return meio; // retorna a chave
        } else if (vetor[meio] < chave)
        {
            inicio = meio + 1;
        } else{
            fim = meio - 1;
        } 
        
    }
    return -1; // chave nao detectada


}

// 5.1 Versao defeituosa

int n = 10;
int bad = 6;
bool badVersion(int version){
    return version >= bad;
}

int busca_binaria(int n){
    int inicio = 1, fim = n;
    while (inicio < fim){
        int meio = (inicio + fim) / 2;
        if (badVersion(meio)){ // o meio é uma versao ruim
            fim = meio; // versao defeituosa esta antes?
        } else{
            inicio = meio + 1; // defeito esta depois do meio
        }
        
    }
    return inicio;
}
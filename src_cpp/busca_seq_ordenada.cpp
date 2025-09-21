#include "busca_seq_ordenada.hpp"


void selectionSort(int vetor[], int tamanho){
    for (int i = 0; i < tamanho -1; i++)
    {
        int indiceMenor = i;
        for (int j = i + 1; j < tamanho; j++)
        {
            if(vetor[j] < vetor[indiceMenor]){
                indiceMenor = j;
            }
        }
        if(indiceMenor != i){
            int temp = vetor[i];
            vetor[i] = vetor[indiceMenor];
            vetor[indiceMenor] = temp;
        }
    }
    
}

int busca_seq_ordenada(int vetor[],int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == chave) {
            return i;
        }
    // [1, 2, 3, 5 , 6]
        if (vetor[i] > chave) {
            break;
        }
        
    }
    return - 1;
}

int conta_especialidades_distintas(int vetor[], int n) {
    selectionSort(vetor, n);
    int banco[100];   // banco para armazenar especialidades
    int qtd_banco = 0;
    int contador = 0;
    for (int i = 0; i < n; i++){

        if (busca_seq_ordenada(banco, qtd_banco, vetor[i]) == -1){
            banco[qtd_banco++] = vetor[i]; // insere no banco
            contador++;
        }
    }

    return contador;
}
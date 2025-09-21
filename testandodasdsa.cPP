#include <iostream>
using namespace std;
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

int main(){
    int arr[] = {4, 3, 3, 2, 2, 1, 1, 3, 2};
     int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Vetor original: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;


    
}
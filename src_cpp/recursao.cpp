#include "recursao.hpp"

int recursao(const char* str, char chave) {
    // caso base, nada a contar
    if (str == nullptr) return 0;
    if (*str == '\0')   return 0;
    // se o caracter for o alvo conta mais 1
    int contaesse = 0;          
    if (*str == chave) {
        contaesse = 1;
    }
    // passo recursivo
    // avanca o ponteiro ate acabar string,  chegando no caso base
    return contaesse + recursao(str + 1, chave);
}

#include <iostream>
#include <string>

int main(){
    std::string nome = "Leonardo";                    // declaração da variável
    std::cout << nome;

    std::cout << "\nTamanho: " << nome.size();        // mostra a quantidade de caracteres que o valor da variável ocupa
    std::cout << "\nPrimeira letra: " << nome[0];     // mostra a primeira letra da variável

    nome.append(" Abel");                             // concatena o valor declarado nos parênteses ao valor
    std::cout << "\nNome Completo: " << nome << "\n"; // printa o valor após a concatenação

    if (nome.find("Abel") != std::string::npos){    // condição onde mostra que caso seja encontrado o valor declarado dentro da variável, será mostrado na tela
        std::cout << "Sobrenome encontrado!\n";       // string::npos é uma ferramenta importante para manipulação de strings, indicando a ausência de um elemento ou o fim da string
    }
    else{
        std::cout << "Sobrenome NÃO encontrado!\n";
    }
}
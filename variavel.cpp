#include <iostream>
#include <string>
#include <locale.h>

int main(){
    std::setlocale(LC_ALL, "Portuguese");

    std::string nome = "Leonardo";  // Armazena texto (cadeia de caracteres)
    char inicial = 'L';             // Armazena um único caractere
    int idade = 22;                 // Armazena um número inteiro
    double altura = 1.7;            // Armazena um número decimal de dupla precisão
    bool vivo = true;               // Armazena valor booleano (true ou false)

    std::cout << "Nome: " << nome 
              << "\nPrimeira letra do nome: " << inicial 
              << "\nIdade: " << idade 
              << "\nAltura: " << altura 
              << "\nVivo? " << vivo << std::endl;
        // "<<" concatena valores na saída padrão (console)
        // O booleano vivo será exibido como 1 (true) ou 0 (false) por padrão
}
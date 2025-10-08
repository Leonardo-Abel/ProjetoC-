#include <iostream>
// #include <string>
#include <limits>

int main(){
        // ===== ENTRADA DE DADOS PELO USUÁRIO =====
        std::string nome;   // Armazena o primeiro nome do usuário.
        std::string nomeC;  // Armazena o nome completo do usuário.
        int idade;          // Armazena a idade. Se o valor digitado for inválido, a variável não recebe valor válido e std::cin entra em estado de falha.
        double altura;      // Armazena altura. Se o usuário usar vírgula no lugar de ponto, a leitura para no caractere da vírgula.

        std::cout << "\nDigite seu PRIMEIRO nome: ";    // Solicita ao usuário o primeiro nome.
        std::cin >> nome;                               // Lê até encontrar espaço em branco.

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     // Limpa o buffer de entrada para evitar que caracteres remanescentes interfiram na próxima leitura.

        std::cout << "\nDigite seu nome COMPLETO: ";    // Solicita nome completo.
        std::getline(std::cin, nomeC);                  // Lê a linha inteira, incluindo espaços, até a quebra de linha.

        std::cout << "\nDigite sua idade: ";            // Solicita idade.
        std::cin >> idade;                              // Se for digitado texto ou símbolo, std::cin entra em estado de erro e a variável mantém valor indefinido.

        std::cout << "\nDigite sua altura: "; // Solicita altura.
        std::cin >> altura; // Interpreta ponto como separador decimal. Vírgula é ignorada.

        // ===== IMPRESSÃO DOS RESULTADOS =====
        std::cout << "\nSeu nome é: " << nome;
        std::cout << "\nSeu nome completo é: " << nomeC;
        std::cout << "\nSua idade é: " << idade;
        std::cout << "\nSua altura é: " << altura << "m";
}
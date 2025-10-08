#include <iostream> // Biblioteca padrão para entrada (input) e saída (output) de dados no console usando std::cin e std::cout.
#include <locale.h> // Permite configurar informações regionais, como idioma, formatação de datas e suporte a acentuação no terminal.
#include <string>   // Biblioteca que fornece a classe std::string para manipulação de textos.

using namespace std; // Facilita o uso evitando escrever "std::" antes dos elementos da biblioteca padrão.   // ⚠ Evitar em projetos grandes para não causar conflitos de nomes.

int main(){ // Função principal: ponto de entrada do programa. Retorna um valor inteiro para o sistema operacional.
    setlocale(LC_ALL, "Portuguese");    // Configura o idioma do console para Português, permitindo exibir caracteres acentuados corretamente.

    std::cout << "Ola mundo com std::cout!\n";
        // Imprime texto e quebra a linha com "\n".
        // \n é mais rápido que std::endl porque não força o flush do buffer de saída.

    std::cout << "Ola mundo com std::endl!" << std::endl;
        // Imprime texto e quebra a linha, forçando flush do buffer de saída.
        // std::endl é mais seguro em casos críticos, mas ligeiramente mais lento.

    cout << "Ola mundo com using namespacestd!" << endl;
        // Idêntico ao acima, mas requer "using namespace std;".

    printf("Usando a funcao printf da linguagem C\n");
        // Função da linguagem C para impressão, também aceita formatação.

    return 0; // Indica ao sistema que o programa terminou com sucesso.
}
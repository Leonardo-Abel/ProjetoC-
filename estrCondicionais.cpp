#include <iostream>

int main(){
    int idade;
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if (idade >= 18){
        std::cout << "Voce e um ADULTO.";
    }
    else if (idade <= 12) {
        std::cout << "Voce e uma CRIANCA";
    }
    else {
        std::cout << "Voce e um ADOLESCENTE";
    }
}
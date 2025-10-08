#include <iostream>

int main() {
    int x = 10;
    int* px = &x; // ponteiro guarda o endereço de x

    std::cout << "Valor de x: " << x << "\n";
    std::cout << "Endereco de x: " << &x << "\n";
    std::cout << "Ponteiro px: " << px << "\n";
    std::cout << "Valor via ponteiro: " << *px << "\n";
}
#include <iostream>

class Pessoa{       // declaração de uma classe chamada Pessoa onde é adicionada a entrada de um nome e uma idade
    public:
        std::string nome;
        int idade;

        void apresentar(){
            std::cout << "Ola, me chamo " << nome << ", e tenho " << idade << " anos!\n";
        }
};

int main(){
    Pessoa p1;
    p1.nome = "Leonardo";
    p1.idade = 22;
    p1.apresentar();
}
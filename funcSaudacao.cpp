#include <iostream>
#include <string>


int saudacao(std::string nome){
    std::cout << "Ola, " << nome << "!\n";
}

int main(){
    saudacao("Leonardo");
}
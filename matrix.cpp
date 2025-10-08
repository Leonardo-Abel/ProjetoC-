#include <iostream>
#include <vector>

int main(){
    // MATRIZES (ARRAYS 2D)
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};  // declaração da matriz e seus valores

    for(int i = 0; i < 2; i++){                 // primeiro loop onde realiza a quebra de linha após o segundo loop ser completado
        for(int j = 0; j < 3; j++){             // segundo loop onde a cada repetição um valor da matriz é printado na tela
            std::cout << matriz[i][j] << " | ";
        }
        std::cout << "\n";
    }
}
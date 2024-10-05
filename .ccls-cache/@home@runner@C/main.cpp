#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numeros[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor para a posição " << i << ": ";
        cin >> numeros[i];
    }

    // Complete o código para exibir os valores do vetor
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

// Complete o código para exibir os valores do vetor
    int max = numeros[0];
    int min = numeros[0];
    
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

// Usando sort
    sort(numeros, numeros + 5);
    for (int i = 0; i < 5; i++) { 
        cout << numeros[i] << " ";
    }
    cout << endl;

// Fazendo o mínimo e o máximo
    for (int i = 0; i < 5; i++) {
        if (numeros[i] > max)
            max = numeros[i];
        if (numeros[i] < min)
            min = numeros[i];
    }
    cout << "O valor máximo é " << max << endl;
    cout << "O valor mínimo é " << min << endl;
    
    return 0;

}
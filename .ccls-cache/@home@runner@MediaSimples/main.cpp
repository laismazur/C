#include <iostream>

using namespace std;



int main() {

    float nota1 = 0, nota2 = 0, media = 0;

    cout << "Digite a primeira nota: ";

    cin >> nota1;

    cout << "Digite a segunda nota: ";

    cin >> nota2;

    // Calcule a média simples das duas notas e exiba o resultado

    media = (nota1 + nota2) / 2;
    cout << "A média é: " << media << endl;

    // Dica: a média simples é a soma das duas notas dividida por 2.

    return 0;

}
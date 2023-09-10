#include <iostream>

using namespace std;

int main() {
    float nota1, nota2, media;

    
    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    
    media = (nota1 + nota2) / 2.0;

   
    cout << "A média final do aluno é: " << media << endl;

    return 0;
}
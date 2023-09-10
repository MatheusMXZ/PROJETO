#include  <iostream>
using namespace std;

int main () {
	float nota1, nota2, media;
	
	// Solicite ao usuário que insira as duas notas
    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    // Calcule a média
    media = (nota1 + nota2) / 2.0;

    // Exiba a média final
    cout << "A média final do aluno é: " << media << endl;

    return 0;
    
	}
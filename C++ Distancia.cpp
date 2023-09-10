#include <iostream>

using namespace std;

int main() {
    float distancia, litros, consumoMedio;

    
    cout << "Digite a distância percorrida (em km): ";
    cin >> distancia;

    cout << "Digite o total de litros de combustível gasto: ";
    cin >> litros;

   
    consumoMedio = distancia / litros;

    
    cout << "O consumo médio do automóvel é de " << consumoMedio << " km/l" << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    char caractere;

    
    cout << "Digite cinco caractere: ";
    cin >> caractere;

    
    int codigoDecimal = static_cast<int>(caractere);
    int codigoHexadecimal = static_cast<int>(caractere);

    
    cout << "O código ASCII em decimal do caractere '" << caractere << "' é: " << codigoDecimal << endl;

  
    cout << "O código ASCII em hexadecimal do caractere '" << caractere << "' é: 0x" << hex << codigoHexadecimal << endl;

    return 0;
}
#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    float catetoA, catetoB, hipotenusa;

    
    cout << "Digite a medida do cateto A: ";
    cin >> catetoA;

    cout << "Digite a medida do cateto B: ";
    cin >> catetoB;

    
    hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

    
    cout << "A medida da hipotenusa é: " << hipotenusa << endl;

    return 0;
}
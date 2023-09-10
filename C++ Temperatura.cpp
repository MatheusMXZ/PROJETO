#include <iostream>

using namespace std;

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> temperaturaFahrenheit;

   
    temperaturaCelsius = (temperaturaFahrenheit - 32) * 5 / 9;

    
    cout << "A temperatura em Celsius é: " << temperaturaCelsius << " °C" << endl;

    return 0;
}
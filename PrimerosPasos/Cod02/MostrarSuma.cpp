#include <iostream>
#include "Suma.hpp"

int main() {
    int a = 5;
    int b = 3;
    int resultado = suma(a, b);
    std::cout << "La suma de " << a << " y " << b << " es " << resultado << std::endl;
    return 0;
}
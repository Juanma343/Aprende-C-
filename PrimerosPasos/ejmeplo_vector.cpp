#include <iostream>

enum class frutas {
    manzana,
    pera,
    platano,
    naranja,
    limon
};


std::ostream& operator<<(std::ostream& os, frutas f) {
    switch (f) {
        case frutas::manzana:
            os << "Manzana";
            break;
        case frutas::pera:
            os << "Pera";
            break;
        case frutas::platano:
            os << "Platano";
            break;
        case frutas::naranja:
            os << "Naranja";
            break;
        case frutas::limon:
            os << "Limon";
            break;
    }
    return os;
}

int main() {
    const int TAM = 5;
    frutas f[TAM] = {frutas::manzana, frutas::pera, frutas::platano, frutas::naranja, frutas::limon};
    int v[TAM] = {1, 2, 3, 4, 5};
    double d[TAM] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float fl[TAM] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    for (int i = 0; i < TAM; i++) {
        std::cout << f[i] << ": " << v[i] << std::endl;
    }
    return 0;
}
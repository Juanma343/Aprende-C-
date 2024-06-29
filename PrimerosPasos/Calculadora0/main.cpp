#include <iostream>
#include <limits>

void pront() {
    std::cout << "Calculadora>";
}

void limpiar() {
    system("cls");
}

void entrada(std::string& dato) {
    std::getline(std::cin, dato);
    if (dato.empty()) {
        std::cin.clear();
    }
}

int main() {

    limpiar();
    bool salir = false;
    std::string operacion;
    do {
        pront();
        entrada(operacion);
        if (operacion == "salir") {
            salir = true;
        } else {
            std::cout << "No se reconoce el comando: '" << operacion << "'" << std::endl;
        }
    } while (!salir);
    limpiar();
}
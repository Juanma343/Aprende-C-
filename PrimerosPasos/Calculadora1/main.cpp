#include <iostream>

int main(){

    std::string entrada;
    bool encendida = true;
    system("cls");
    do {

        std::cout << "Calculadora>";
        std::cin >> entrada;
        if (entrada == "limpiar"){
            system("cls");
        }
        else if (entrada == "apagar"){
            encendida = false;
        }else{
            std::cout << "La entrada es '" << entrada << "'" << std::endl;
        }

    } while (encendida);
    system("cls");

    return 0;
}
#include <iostream>
#include <string>

int main()
{

    std::cout << "Hello World!" << std::endl;

    std::string nombre = "";

    std::cout << "Introduce tu nombre:" << std::endl;
    std::cin >> nombre;
    //getline(std::cin, nombre);
    std::cout << "Bienvenid@ " << nombre << "!" << std::endl;

    return 0;
}
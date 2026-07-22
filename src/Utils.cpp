//Includes
#include "Utils.hpp"
#include <limits>

std::vector<std::pair<std::string, std::string>> Utils::fillVector(std::string ubication){
    std::ifstream file(ubication);
    std::string line;

    std::vector<std::pair<std::string, std::string>> data;

    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string name, type;

        std::getline(ss, name, ';');
        std::getline(ss, type, ';');

        data.push_back({name, type});
    }
    return data;
}

std::string Utils::showMenu(){
    std::string option; 

    Utils::showMiniPause();
    std::cout << "Escoja la opcion bajo la cual desea ver organizada el listado" << std::endl;
    std::cout << "1.Nombre" << std::endl;
    std::cout << "2.Tipo" << std::endl;
    std::cout << "Ingrese el numero de la opcion que desee(Cualquier otra opcion terminara el programa):";
    std::getline(std::cin, option);
    return option;
}

void Utils::showMiniPause(){
    std::cout << "Bienvenido al menu, presione Enter para continuar" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
}

//Include of the required elements
#include "Quicksort.hpp"
#include "Utils.hpp"
#include <iostream>

int main(){
    //variables
    std::string option;

    // execution
    std::vector<std::pair<std::string, std::string>> vector = Utils::fillVector("data/listado.csv");
    option = Utils::showMenu();

    while(true){
        if (option != "1" && option != "2"){
            break;
        }
        else if (option == "1"){
            Quicksort::exeQuicksort(vector, 1);
        }
        else{
            Quicksort::exeQuicksort(vector,2);
        }
        
        std::cout << "Arreglo realizado:" << std::endl;
    
        for(int i = 0; i < vector.size(); i++){
            std::cout << vector[i].first << " , " << vector[i].second << std::endl;
        }
    
        option = Utils::showMenu();
    }
}

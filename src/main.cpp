//Include of the required elements
#include "Quicksort.hpp"
#include <iostream>

int main(){

    std::vector<std::pair<std::string, std::string>> basicString = {
        {"MARIO", "hombre"},
        {"JESUS", "hombre"},
        {"AITOR", "mujer"}
    };

    Quicksort::exeQuicksort(basicString, 2);

    for(int i = 0; i < basicString.size(); i++){
        std::cout << basicString[i].first << " , " << basicString[i].second << std::endl;
    }
}
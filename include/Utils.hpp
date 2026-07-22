//Include guard
#pragma once

//Include of necessary elements
#include <fstream>
#include <sstream>
#include <vector>
#include <string> 
#include <utility>

class Utils{
    public:
    static std::vector<std::pair<std::string, std::string>> fillVector (std::string ubication){
        std::ifstream archivo(ubication);
        std::string line;
        std::vector<std::string> elements;

        while(std::getline(archivo, line)) {
        std::stringstream ss(line);
        std::string cell;
        std::vector<std::string> fila;

        while (std::getline(ss, cell, ';')) {
            fila.push_back(cell);
        }

        filas.push_back(fila);
    } 
};


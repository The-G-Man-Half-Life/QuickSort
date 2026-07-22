//Include guard
#pragma once

//Include of necessary elements
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string> 
#include <utility>

class Utils{
    public:
    static std::vector<std::pair<std::string, std::string>> fillVector (std::string ubication);

    static std::string showMenu();

    static void showMiniPause();
};


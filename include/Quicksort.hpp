//Include guards
#pragma once

//Include of necessary elements
#include <vector>
#include <string>
#include <utility>

class Quicksort{
    //Methods necessary for sorting but not for showing to anyone else
    private:
    static std::vector<std::pair<std::string, std::string>> sortingLR(std::vector<std::pair<std::string, std::string>>& vector, int start, int end, int col);
    static int partitionate(std::vector<std::pair<std::string, std::string>>& vector, int start, int end, int col);

    //Main method that will take care of casting the other 2 for sorting
    public:
    static void exeQuicksort(std::vector<std::pair<std::string, std::string>>& vector, int col);
};
//Include of the header with the required elements
#include "Quicksort.hpp"

//private methods
int Quicksort::partitionate(std::vector<std::pair<std::string, std::string>>& vector, int start, int end, int col){
    //Variables
    int i;
    int j;
    std::string pivotValue;

    i = start-1;
    j = start;

    if (col == 1)
    {
        pivotValue = vector[end].first;
    
        for (; j <= end; j++)
        {
            if(vector[j].first <= pivotValue){
                i++;
                std::swap(vector[i],vector[j]);
            }
        }
    }
    else{
        pivotValue = vector[end].second;
    
        for (; j <= end; j++)
        {
            if(vector[j].second <= pivotValue){
                i++;
                std::swap(vector[i],vector[j]);
            }
        }
    }
    
    return i;
}

std::vector<std::pair<std::string, std::string>> Quicksort::sortingLR(std::vector<std::pair<std::string, std::string>>& vector, int start, int end, int col){
    //variables
    int pivot;

    if(start < end){
        if (col == 1)
        {
            pivot = partitionate(vector, start, end, 1);
            sortingLR(vector, start, pivot-1, 1);
            sortingLR(vector, pivot+1, end, 1);
        }
        else{
            pivot = partitionate(vector, start, end, 2);
            sortingLR(vector, start, pivot-1, 2);
            sortingLR(vector, pivot+1, end, 2);
        }
    }
    return vector;
}


//public methods
void Quicksort::exeQuicksort(std::vector<std::pair<std::string, std::string>>& vector, int col){
    Quicksort::sortingLR(vector, 0, vector.size()-1, col);
}

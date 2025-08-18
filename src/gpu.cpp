#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>
#include "gpu.h"

void display(std::vector<double>& vector_int)
{

    for (const auto& number : vector_int)
    {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>

#include "ram.h"

void save(std::vector<double>& vector_int)
{

    std::ofstream file("data.txt", std::ios::app);
    if (!file)
    {
        std::cerr << "Записать файл не получилось";
    }
    else
    {
        for (const auto& number : vector_int)
        {
            file << number << " " << std::endl;
        }
        file.close();
    }

    std::cout << std::endl;
}

void load(std::vector<double>& vector_int)
{
    double number;
    std::ifstream file("data.txt");
    if (!file.is_open())
    {
        std::cerr << "Файл открыть не получилось" << std::endl;
        return;
    }
    else
    {
        while (file >> number)
        {
            vector_int.push_back(number);
        }

        file.close();
        std::cout << std::endl;
    }
}
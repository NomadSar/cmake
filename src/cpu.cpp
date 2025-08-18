#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>



void sum(std::vector<double>& vector_int)
{
    double sum = 0;
    for (const auto& number : vector_int)
    {
        sum += number;
    }
    std::cout << "Сумма 8 чисел " << sum;
    std::cout << std::endl;
}
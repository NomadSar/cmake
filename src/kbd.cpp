#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>


void input(std::vector<double>& vector_int)

{

    double number;
    for (int i{ 0 }; i < 8; i++)
    {
        std::cout << "¬ведите число :" << std::endl;
        while (!(std::cin >> number))
        {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "enter the wrong value again";
        }

        vector_int[i] = number;
    }
    std::cout << std::endl;
}
#include <iostream>
#include <vector>
#include <string>
#include "cpu.h"
#include "kbd.h"
#include "ram.h"
#include "gpu.h"
#include "disk.h"


int main()
{
    int N=8;
    std::vector<double> vector_int;    
    vector_int.reserve(N);
    std::string comand;
    std::cout << "Введите название команды sum,save,load,input,display,exit:" << std::endl;

    
    while (std::cin >> comand)
    {

        if (comand == "sum")
        {
            if (vector_int.size()>0){
                sum(vector_int);
            }else{
                std::cout << "Вектор пустой" << std::endl;
            }
            
        }
        else if (comand == "load")
        {
            load(vector_int);
        }
        else if (comand == "save")
        {
            if (vector_int.size()>0){
                save(vector_int);
            }else{
                std::cout << "Вектор пустой" << std::endl;
            }
            
        }
        else if (comand == "input")
        {
            input(vector_int);
        }
        else if (comand == "display")
        {
              if (vector_int.size()>0){
                display(vector_int);
            }else{
                std::cout << "Вектор пустой" << std::endl;
            }
            
        }
        else if (comand == "exit")
        {
            std::cout << "Программа завершена.";
            break;
        }
        else {
            std::cout << "Такой команды не знаю." << std::endl;
        }
        std::cout << "Введите название команды sum,save,load,input,display,exit:" << std::endl;
    }
        
}
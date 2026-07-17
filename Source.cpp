#include <iostream>
#include <string>
#include <Windows.h>


int main()

{ 
    SetConsoleCP(CP_UTF8);

    SetConsoleOutputCP(CP_UTF8);


    std::cout << std::boolalpha;


    bool variable1;

    bool variable2;

    std::cout << "Оператор: ||" << std::endl;

    variable1 = true;  variable2 = true;

    std::cout << variable1 << "\t" << variable2 << "\t" << (variable1 || variable2) << std::endl;

    variable1 = false; variable2 = true;

    std::cout << variable1 << "\t" << variable2 << "\t" << (variable1 || variable2) << std::endl;

    variable1 = true;  variable2 = false;

    std::cout << variable1 << "\t" << variable2 << "\t" << (variable1 || variable2) << std::endl;

    variable1 = false; variable2 = false;

    std::cout << variable1 << "\t" << variable2 << "\t" << (variable1 || variable2) << std::endl;

    std::cout << std::endl;

    std::cout << "Оператор: &&" << std::endl;

    variable1 = true;  variable2 = true;

    std::cout << variable1 << "\t" << variable2 << "\t" << (variable1 && variable2) << std::endl;

    variable1 = false; variable2 = true;

    std::cout << variable1 << "\t" << variable2 << "\t" << (variable1 && variable2) << std::endl;

    variable1 = true;  variable2 = false;

    std::cout << variable1 << "\t" << variable2 << "\t" << (variable1 && variable2) << std::endl;

    variable1 = false; variable2 = false;

    std::cout << variable1 << "\t" << variable2 << "\t" << (variable1 && variable2) << std::endl;

    return 0;

}
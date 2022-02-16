#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <stdexcept>

void show_args(char* arg, double db, float ft, int it, char ch)
{
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "argument: " << arg << std::endl;
    std::cout << "double: " << db << std::endl;
    std::cout << "float: " << ft << "f" << std::endl;
    if (!isnan(db) && !isinf(db))
        std::cout << "int: " << it << std::endl;
    else 
        std::cout << "int: impossible" << std::endl;
    if (std::isprint(ch))
        std::cout << "char: " << ch << std::endl;
    else if (isnan(db) || isinf(db))
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    double value_d;
    try
    {
        value_d = std::stod(argv[1], nullptr);
    }
    catch (const std::invalid_argument& ia)
    {
        std::cerr << "Invalid argument: " << ia.what() << std::endl;
        return 1;
    }

    int value_i = static_cast<int>(value_d);
    float value_f = static_cast<float>(value_d);
    char value_c = static_cast<char>(value_d);
    
    show_args(argv[1], value_d, value_f, value_i, value_c);

    return 0;
}

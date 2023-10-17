#include <istream>
#include <format>
#include "app.h"
#include <ostream>
#include <iostream>
using vsite::oop::v2::color;

int main()
{
    color c;
    
    std::cout << "Unesite vrijednosti (0-1): \n";

    std::cout << "Crvena: ";
    c.set_red(std::cin);

    std::cout << "Zelena: ";
    c.set_green(std::cin);

    std::cout << "Plava: ";
    c.set_blue(std::cin);

    std::cout << "Hex vrijednost upisane boje: " << c.to_hex();
}

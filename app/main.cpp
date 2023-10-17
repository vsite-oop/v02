#include <istream>
#include <format>
#include "app.h"
#include <ostream>
#include <iostream>
using vsite::oop::v2::color;
using vsite::oop::v2::to_hex;

int main()
{
    int red;
    int green;
    int blue;

    std::cout << "Unesite vrijednosti (0-255): \n";

    std::cout << "Crvena: ";
    std::cin >> red;

    std::cout << "Zelena: ";
    std::cin >> green;

    std::cout << "Plava: ";
    std::cin >> blue;

    std::cout << "Hex vrijednost upisane boje: " << "0x" << to_hex(red) << to_hex(green) << to_hex(blue);
}

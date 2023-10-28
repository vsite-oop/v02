#include <iostream>
#include <format>
#include "app.h"
#include <ostream>
using vsite::oop::v2::color;
using vsite::oop::v2::to_hex;

int main()
{
    color c;

    double red;
    double green;
    double blue;

    std::cout << "Unesite vrijednosti: \n";

    std::cout << "Crvena: ";
    std::cin >> red;
    c.set_red(red);

    std::cout << "Zelena: ";
    std::cin >> green;
    c.set_green(green);

    std::cout << "Plava: ";
    std::cin >> blue;
    c.set_blue(blue);

    std::cout << "Hex vrijednost boje" << "0x" << to_hex(c.get_color_ref());
}

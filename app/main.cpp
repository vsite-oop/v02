
#include <iostream>
#include <format>
#include "app.h"
#include <ostream>
#include <istream>

int main()
{

using vsite::oop::v2::color;
using vsite::oop::v2::to_hex;

    color c;

    double blue;
    double red;
    double green;

    std::cout << "Unesite vrijednosti :";

    std::cout << "Crvena: "; std::cin >> red; c.set_red(red);
    std::cout << "Zelena: "; std::cin >> green; c.set_green(green);
    std::cout << "Plava: "; std::cin >> blue; c.set_blue(blue);


    std::cout << "Vrijednost boje: " << "0x" << to_hex(c.get_color_ref());
}

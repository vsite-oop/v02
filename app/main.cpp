#include <iostream>
#include <format>
#include "app.h"

int main()
{
    vsite::oop::v2::color a;
    double x;

    std::cout<<"Unesite RED: ";
    std::cin<<x;
    a.set_red(x);

    std::cout<<"Unesite GREEN: ";
    std::cin<<x;
    a.set_green(x);

    std::cout<<"Unesite BLUE: ";
    std::cin<<x;
    a.set_blue(x);

    std::cout<<"RGB hex color: "<<vsite::oop::v2::to_hex(a.get_color_ref();


}

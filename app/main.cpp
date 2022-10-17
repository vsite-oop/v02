#include <iostream>
#include <format>
#include "app.h"

using namespace vsite::oop::v2;

int main()
{
    double comp;
    color boja;

    std::cout << "\nUnesite crvenu komponentu: ";
    std::cin >> comp;
    boja.set_red(comp);

    std::cout << "\nUnesite zelenu komponentu: ";
    std::cin >> comp;
    boja.set_green(comp);

    std::cout << "\nUnesite plavu komponentu: ";
    std::cin >> comp;
    boja.set_blue(comp);

    std::cout << std::format("RGB vrijednost u heksadecimalnom zapisu: 0x{:X}", boja.get_color_ref());
}

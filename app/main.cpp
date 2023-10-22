#include <iostream>
#include <format>
#include "app.h"

using vsite::oop::v2::color;

int main()
{
	double red, green, blue;

	std::cout << "Unesite vrijednost crvene boje: ";
	std::cin >> red;
	std::cout << "Unesite vrijednost zelene boje: ";
	std::cin >> green;
	std::cout << "Unesite vrijednost plave boje: ";
	std::cin >> blue;

	color c;
	c.set_red(red / 255);
	c.set_green(green / 255);
	c.set_blue(blue / 255);

	std::cout << "Crvena boja: " << c.get_red() << "\n";
	std::cout << "Zelena boja: " << c.get_green() <<"\n";
	std::cout << "Plava boja: " << c.get_blue() <<"\n";

	std::cout << "Vasa boja: " << c.get_color_ref() << "\n";
	std::cout << "Boja u heksadecimalnom zapisu: 0x" << vsite::oop::v2::to_hex(c.get_color_ref());
}

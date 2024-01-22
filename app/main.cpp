#include <iostream>
#include <format>
#include "app.h"

using vsite::oop::v2::color;

int main()
{
	double red, green, blue;
	int for_hex;

	//Unos vrijednosti
	std::cout << "Unesite RGB vrijednosti\n";
	std::cin >> red;
	std::cin >> green;
	std::cin >> blue;

	//Postavljanje vrijednosti
	color c;
	c.set_red(red / 255);
	c.set_green(green / 255);
	c.set_blue(blue / 255);

	//Ispis vrijednosti
	std::cout << "Crvena: " << c.get_red() << std::endl;
	std::cout << "Zelena: " << c.get_green() << std::endl;
	std::cout << "Plava: " << c.get_blue() << std::endl;
	for_hex = c.get_color_ref();
	std::cout << "Boja: " << for_hex << std::endl;
	std::cout << "Boja u hexa: 0x" << vsite::oop::v2::to_hex(for_hex) << std::endl;
}
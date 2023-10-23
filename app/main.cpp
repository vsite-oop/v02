#include <iostream>
#include <format>
#include <string>
#include "app.h"

using namespace vsite::oop::v2;
int main(){
	double red, green, blue;
	color c;

	std::cout << "Upiši R/G/B komponente boje (0-1)\n";

	std::cout << "Crvena: ";
	std::cin >> red;
	c.set_red(red);

	std::cout << "Zelena: ";
	std::cin >> green;
	c.set_green(green);

	std::cout << "Plava: ";
	std::cin >> blue;
	c.set_blue(blue);

	std::cout << "Vrijednost boje u hex zapisu 0x" << to_hex(c.get_color_ref());


}

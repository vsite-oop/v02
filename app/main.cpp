#include <iostream>
#include <format>
#include "app.h"

int main()
{
	double r, g, b;
	vsite::oop::v2::color c;

	std::cout << "Unesite R/G/B komponente boje" << std::endl;
	std::cout << "R: ";
	std::cin >> r;
	c.set_red(r);

	std::cout << "G: ";
	std::cin >> g;
	c.set_green(g);

	std::cout << "B: ";
	std::cin >> b;
	c.set_blue(b);

	std::cout << "R_hex: " << std::format("{:X}", int(c.get_red() * 255)) << " G_hex: " << std::format("{:X}", int(c.get_green() * 255)) << " B_hex: " << std::format("{:X}", int(c.get_blue() * 255));

}

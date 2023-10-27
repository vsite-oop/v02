#include <iostream>
#include <format>
#include "app.h"
#include<iomanip>
using vsite::oop::v2::color;
int main()
{
	double r, g, b;
	std::cin >> r;
	std::cin >> g;
	std::cin >> b;
	color c;
	
	c.set_red(r);
	c.set_green(g);
	c.set_blue(b);

	std::cout << "Crvena boja: " << c.get_red() << "\n";
	std::cout << "Zelena boja: " << c.get_green() << "\n";
	std::cout << "Plava boja: " << c.get_blue() << "\n";

	std::cout << '#' << std::setfill('0') << std::setw(6) << vsite::oop::v2::to_hex(r) + vsite::oop::v2::to_hex(g) + vsite::oop::v2::to_hex(b);


}

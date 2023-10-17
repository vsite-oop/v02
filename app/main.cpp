#include <iostream>
#include <format>
#include "app.h"
#include <iomanip>
int main()
{
	vsite::oop::v2::color c;
	int r, g, b;
	c.get_blue();
	c.get_color_ref();
	std::cin >> r;
	std::cin >> g;
	std::cin >> b;
	//c.set_red(r / 255.);
	//c.set_blue(b / 255.);
	//c.set_green(g / 255.);
	std::cout << '#'  <<  std::setfill('0') << std::setw(6) <<  vsite::oop::v2::to_hex(r) + vsite::oop::v2::to_hex(g) + vsite::oop::v2::to_hex(b);

}

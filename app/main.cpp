#include <iostream>
#include <format>
#include "app.h"
#include <iomanip>
#include <string>
int main()
{
	vsite::oop::v2::color c;
	int r, g, b;
	char a, d = 'a';
	std::cin >> r;
	std::cin >> g;
	std::cin >> b;
	c.set_red(r / 255.);
	c.set_blue(b / 255.);
	c.set_green(g / 255.);
	std::cout << c.get_red() << std::endl;
	std::cout << c.get_green() << std::endl;
	std::cout << c.get_blue() << std::endl;
	std::cout << c.get_color_ref() << std::endl;
	std::cout << '#' << vsite::oop::v2::to_hex(c.get_color_ref());
} 

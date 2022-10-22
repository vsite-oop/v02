#include <iostream>
#include <format>
#include "app.h"

int main()
{
	double red, green, blue;
	auto userColor = vsite::oop::v2::color();

	std::cout << "Input RED value [0, 1]: ";
	std::cin >> red;

	std::cout << "Input GREEN value [0, 1]: ";
	std::cin >> green;

	std::cout << "Input BLUE value [0, 1]: ";
	std::cin >> blue;

	userColor.set_red(red);
	userColor.set_green(green);
	userColor.set_blue(blue);

	std::cout << "\nColor HEX value: " << std::format("0x{:X}", userColor.get_color_ref());
}



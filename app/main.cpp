#include <iostream>
#include <format>
#include "app.h"

int main()
{

	vsite::oop::v2::color c;
	double input;

	std::cout << "Input red value (between 0 and 1): ";
	std::cin >> input;
	c.set_red(input);
	std::cout << "Input green value (between 0 and 1): ";
	std::cin >> input;
	c.set_green(input);
	std::cout << "Input blue value (between 0 and 1): ";
	std::cin >> input;
    c.set_blue(input);

	std::cout << std::format("Hex: #{:X}", c.get_color_ref());
	

}

#include <iostream>
#include <format>
#include "app.h"

int main()
{

	vsite::oop::v2::color c;

	c.set_red(0.6);
	c.set_green(0.5);
	c.set_blue(0.6);

	std::cout << std::format("#{:X}", c.get_color_ref());
	

}

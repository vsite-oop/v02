#include <iostream>
#include <format>
#include "app.h"

int main()
{
	vsite::oop::v2::color n;
	double component;
	std::cout << "red component: ";
	std::cin >> component;
	n.set_red(component);

	std::cout << "blue component: ";
	std::cin >> component;
	n.set_blue(component);

	std::cout << "green component: ";
	std::cin >> component;
	n.set_green(component);

	std::cout << std::format("RGB hex: {}", vsite::oop::v2::to_hex(n.get_color_ref()));
}


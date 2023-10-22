#include <iostream>
#include <format>
#include "app.h"

int main()
{
	vsite::oop::v2::color boja;
	double komponenta;
	std::cout << "Unesi R komponentu: ";
	std::cin >> komponenta;
	boja.set_red(komponenta);

	std::cout << "Unesi G komponentu: ";
	std::cin >> komponenta;
	boja.set_blue(komponenta);

	std::cout << "Unesi B komponentu: ";
	std::cin >> komponenta;
	boja.set_green(komponenta);

	std::cout << std::format("Heksadecimanli RGB: {}", vsite::oop::v2::to_hex(boja.get_color_ref()));
}

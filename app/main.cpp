#include <iostream>
#include <format>
#include "app.h"

int main()
{
	vsite::oop::v2::color a;
	double unos;
	
	std::cout << "Unesi R komponentu: ";
	std::cin >> unos;
	a.set_red(unos);
	
	std::cout << "Unesi G komponentu: ";
	std::cin >> unos;
	a.set_green(unos);
	
	std::cout << "Unesi B komponentu: ";
	std::cin >> unos;
	a.set_blue(unos);
	
	std::cout << std::format("RGB vrijednosti hex: {}", vsite::oop::v2::to_hex(a.get_color_ref()) );
}

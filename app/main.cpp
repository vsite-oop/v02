#include <iostream>
#include <format>
#include "app.h"

int main()
{
	vsite::oop::v2::color myColor;
	double input;

	std::cout << "Unesite R, G i B komponentu boje u iznosu od 0 do 1.\n";
	std::cout << "R: ";
	std::cin >> input;
	myColor.set_red(input);

	std::cout << "G: ";
	std::cin >> input;
	myColor.set_green(input);

	std::cout << "B: ";
	std::cin >> input;
	myColor.set_blue(input);

	std::cout << std::format("RGB vrijednost u heksadecimalnom obliku je: {}\n", vsite::oop::v2::to_hex(myColor.get_color_ref()));
}

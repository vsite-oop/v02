#include <iostream>
#include <algorithm>
#include <format>
#include "app.h"



int main()
{
	
	vsite::oop::v2::color c;
	double R, G, B;
	std::cin >> R;
	std::cin >> G;
	std::cin >> B;
	c.set_red(R);
	c.set_green(G);
	c.set_blue(B);
	
	std::cout << c.get_red() << "\n";
	std::cout << c.get_green() << "\n";
	std::cout << c.get_blue() << "\n";
	std::cout << c.get_color_ref() << "\n";
	std::cout << c.get_luminance() << "\n";
	std::cout << '#' << vsite::oop::v2::to_hex(c.get_color_ref());
}

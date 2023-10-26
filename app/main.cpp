#include <iostream>
#include <algorithm>
#include <format>
#include "app.h"



int main()
{
	
	vsite::oop::v2::color c;
	double R, G, B;
	std::cin >> R;
	std::clamp(R, 0.0, 1.0);
	std::cin >> G;
	std::clamp(G, 0.0, 1.0);
	std::cin >> B;
	std::clamp(B, 0.0, 1.0);
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

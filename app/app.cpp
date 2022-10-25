#include "app.h"
#include <algorithm>
#include <format>  // For std::format

namespace vsite::oop::v2
{
/*
* class member function implementations
*/
	double color::get_red() const{  // return_type class_name::method_name()
		return red;
	}

	double color::get_green() const{  // Slide 20 (C++ implementacija)
		return green;
	}

	double color::get_blue() const{
		return blue;
	}

	void color::set_red(double n) {
		red = std::clamp(n, 0.0, 1.0);  // Shorter alternative would be "red = n", but in that case tests 3-5 won't work. Clamp squeezes value inside defined limits if its outside of them.
	}

	void color::set_green(double n) {
		green = std::clamp(n, 0.0, 1.0);
	}

	void color::set_blue(double n) {
		blue = std::clamp(n, 0.0, 1.0);
	}

	uint32_t color::get_color_ref() const {
		return RGB(red * 255, green * 255, blue * 255);
	}

	double color::get_luminance() const {
		return red * 0.2126 + green * 0.7152 + blue * 0.0722;
	}

	std::string to_hex(int n) {  // Function from repository v01
		return std::format("{:X}", n);
	}

} // namespace

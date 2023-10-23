#include "app.h"
#include <algorithm>
#include <string>
#include <format>

namespace vsite::oop::v2
{
/*
* class member function implementations
*/
	std::string to_hex(int number) {
		return std::format("{:X}", number);
	}
	
	void color::set_red(double red) {
		this->red = std::clamp(red, 0., 1.);
	}
	void color::set_green(double green) {
		this->green = std::clamp(green, 0., 1.);
	}
	void color::set_blue(double blue) {
		this->blue = std::clamp(blue, 0., 1.);
	}

	double color::get_red() const {
		return red;
	}
	double color::get_green() const {
		return green;
	}
	double color::get_blue() const {
		return blue;
	}

	uint32_t color::get_color_ref() {
		return RGB(255 * red, 255 * green, 255 * blue);
	}

	double color::get_luminance() const{
		return red * 0.2126 + green * 0.7152 + blue * 0.0722;
	}

} // namespace

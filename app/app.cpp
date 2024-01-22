#include "app.h"
#include <algorithm>
#include <format>
#include <iostream>

namespace vsite::oop::v2
{
	/*
	* class member function implementations
	*/
	color::color(double red, double green, double blue) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}

	void color::set_red(double x) {
		red = std::clamp(x, 0.0, 1.0);
	}

	void color::set_green(double x) {
		green = std::clamp(x, 0.0, 1.0);
	}

	void color::set_blue(double x) {
		blue = std::clamp(x, 0.0, 1.0);
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

	std::string to_hex(int color) {
		return std::format("{:06X}", color);
	}

	double color::get_luminance() const {
		return red * 0.2126 + green * 0.7152 + blue * 0.0722;
	}

	uint32_t color::get_color_ref() const {
		return RGB(red * 255, green * 255, blue * 255);
	}

} // namespace

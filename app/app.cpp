#include "app.h"
#include <algorithm>
#include <iostream>
#include <format>

namespace vsite::oop::v2
{
/*
* class member function implementations
*/
	color::color(double red, double green, double blue) {
		this->r = red;
		this->g = green;
		this->b = blue;
	}

	double color::get_red() const{
		return r;
	}
	double color::get_green() const {
		return g;
	}
	double color::get_blue() const {
		return b;
	}
	void color::set_red(double c) {
		r = std::clamp(c, 0.0, 1.0);
	}
	void color::set_green(double c) {
		g = std::clamp(c, 0.0, 1.0);
	}
	void color::set_blue(double c) {
		b = std::clamp(c, 0.0, 1.0);
	}
	std::string to_hex(int num) {
		return std::format("{:06X}", num);
	}
	double color::get_luminance() const{
		return r * 0.2126 + g * 0.7152 + b * 0.0722;
	}

	uint32_t color::get_color_ref() const {
		return RGB(r * 255, g * 255, b * 255);
	}
} // namespace

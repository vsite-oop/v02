#include "app.h"
#include <algorithm>
#include <format>

namespace vsite::oop::v2
{
	std::string to_hex(int broj) {
		return std::format("{:X}", broj);
	}
	color::color() :red(0.0), green(0.0), blue(0.0) {}
	color::color(const color& other) :red(other.red), green(other.green), blue(other.blue) {}
	color& color::operator=(const color& other) {
		if (this != &other) {
			red = other.red;
			green = other.green;
			blue = other.blue;
		}
		return *this;
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
	void color::set_red(double red) {
		if (red < 0.0) {
			this->red = 0.0;
		}
		else if (red > 1.0) {
			this->red = 1.0;
		}
		else {
			this->red = red;
		}
	}
	void color::set_green(double green) {
		if (green < 0.0) {
			this->green = 0.0;
		}
		else if (green > 1.0) {
			this->green = 1.0;
		}
		else {
			this->green = green;
		}
	}
	void color::set_blue(double blue) {
		if (blue < 0.0) {
			this->blue = 0.0;
		}
		else if (blue > 1.0) {
			this->blue = 1.0;
		}
		else {
			this->blue = blue;
		}
	}
	uint32_t color::get_color_ref() const {
		uint8_t r = static_cast<uint8_t>(red * 255);
		uint8_t g = static_cast<uint8_t>(green * 255);
		uint8_t b = static_cast<uint8_t>(blue * 255);

		return RGB(r, g, b);
	}
	double color::get_luminance()const {
		return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
	}
} // namespace
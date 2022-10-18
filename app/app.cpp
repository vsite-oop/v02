#include "app.h"
#include <algorithm>
#include <string>
#include <format>

namespace vsite::oop::v2
{
	std::string to_hex(int a) {
		return std::format("{:X}", a);
	}

	double color::get_red() const {
		return r;
		}
	double color::get_green() const {
		return g;
		}
	double color::get_blue() const {
		return b;
		}

	void color::set_red(double r) {
		this->r = std::clamp(r, 0.0, 1.0);
	}
	void color::set_green(double g) {
		this->g = std::clamp(g, 0.0, 1.0);
	}
	void color::set_blue(double b) {
		this->b = std::clamp(b, 0.0, 1.0);
	}

	uint32_t color::get_color_ref() const {
		return RGB(r * 255, g * 255, b * 255);
	}

	double color::get_luminance() const {
		return 0.2126 * r + 0.7152 * g + 0.0722 * b;
	}


} // namespace

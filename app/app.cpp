#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
	std::string to_hex(int boja) {
		return std::format("{:X}", boja);
	}



	double  color::get_red() const {
		return red;

	}
	double  color::get_green() const {
		return green;

	}
	double  color::get_blue() const {
		return blue;

	}


	void color::set_red(double R) {
		red = std::clamp(R, 0.0, 1.0);
	}
	void color::set_green(double G) {
		green = std::clamp(G, 0.0, 1.0);
	}
	void color::set_blue(double B) {
		blue = std::clamp(B, 0.0, 1.0);
	}

	unsigned int color::get_color_ref() const {
		return RGB(red * 255, green * 255, blue * 255);

	}

	double color::get_luminance() const {
		return (red * 0.2126 + green * 0.7152 + blue * 0.0722);
	}
}


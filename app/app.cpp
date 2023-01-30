#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
	std::string to_hex(int a) {
		return std::format("{:X}", a);
	}

	double  color::get_red() const {
		return red;

	}

	double  color::get_blue() const {
		return blue;

	}

	double  color::get_green() const {
		return green;

	}

	
		void color::set_red(double red) {
			this->red = std::clamp(red,0.0, 1.0);
		}

		void color::set_blue(double blue) {
			this->blue = std::clamp(blue, 0.0, 1.0);
		}

		void color::set_green(double green) {
			this->green = std::clamp(green, 0.0, 1.0);
		}

		unsigned int color::get_color_ref() const {
			return RGB(red * 255, green * 255, blue * 255);

		}
		
		double color::get_luminance() const {
			return (red * 0.2126 + green * 0.7152+ blue * 0.0722);
		}




} // namespace

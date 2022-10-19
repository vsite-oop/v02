#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
	/*
	* class member function implementations
	*/

	//******get*******
	double color::get_red() const {
		return red;
	}
	double color::get_green() const {
		return green;
	}
	double color::get_blue() const {
		return blue;
	}

	//*******set********
	void color::set_red(double value) {
		red = std::clamp(value, 0., 1.);
	}
	void color::set_blue(double value) {
		blue = std::clamp(value, 0., 1.);
	}
	void color::set_green(double value) {
		green = std::clamp(value, 0., 1.);
	}

	//*******color ref*******
	unsigned color::get_color_ref() const{
		return RGB(red * 255, green * 255, blue * 255);
	}

	//********get luminance*******
	double color::get_luminance() const{
		return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
	}


} // namespace


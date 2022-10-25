#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
/*
* class member function implementations
*/
	double color::get_red() const{  // povratni_tip naziv_klase::naziv_metode()
		return red;
	}

	double color::get_green() const{  // Slajd 20 (C++ implementacija)
		return green;
	}

	double color::get_blue() const{
		return blue;
	}

	void color::set_red(double n) {
		red = std::clamp(n, 0.0, 1.0);  // Mogu i jednostavno napisati red = n ali onda neæe raditi testovi 3-5. Clamp ugura vrijednost u zadane granice ako je izvan.
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

} // namespace

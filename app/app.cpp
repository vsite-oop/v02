#include "app.h"
#include <algorithm>
#include<iomanip>
#include<format>

//clamp
//std::clamp(n,0,255)

namespace vsite::oop::v2
{
/*
* class member function implementations
*/

		double color::get_red() const {
			return red;
		}
		double color::get_green() const {
			return green;
		}
		double color::get_blue() const {
			return blue;
		}

		double low = 0.f;
		double high = 1.f;

		void color::set_red(double r) {
			red = std::clamp(r, low, high);
		}
		void color::set_green(double g) {
			green = std::clamp(g, low, high);
		}
		void color::set_blue(double b) {
			blue = std::clamp(b, low, high);
		}

		uint32_t color::get_color_ref() const{
			return RGB(red*255, green*255, blue*255);
			
		}
		double color::get_luminance() const{
			return (0.2126 * red + 0.7152 * green + 0.0722 * blue);
		}

} // namespace

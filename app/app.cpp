#include "app.h"
#include <algorithm>

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

		void color::set_red(double r) {
			red = r;
		}
		void color::set_green(double g) {
			green = g;
		}
		void color::set_blue(double b) {
			blue = b;
		}

		uint32_t color::get_color_ref() const{
			return 22;
		}
		double color::get_luminance() const{
			return 0.;
		}

} // namespace

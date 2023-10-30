#include "app.h"
#include <algorithm>
#include<format>



namespace vsite::oop::v2
{
	color::color(double red, double green, double blue) {
		this->R = red;
		this->G = green;
		this->B = blue;
	}
	void color::set_red(double red) {
		R = std::clamp(red, 0.0, 1.0);
	}
	void color::set_green(double green) {
		G = std::clamp(green, 0.0, 1.0);
	}
	void color::set_blue(double blue) {
		B = std::clamp(blue, 0.0, 1.0);
	}
	double color::get_red() const{
		return R;
	}
	double color::get_green() const{
		return G;
	}
	double color::get_blue() const{
		return B;
	}
	unsigned int color::get_color_ref() const{
		return RGB(R*255, G*255, B*255);
	}
	double color::get_luminance() const{
		return(R*0.2126 + G*0.7152 + B*0.0722);
	}
	std::string to_hex(int n) {
		return std::format("{:06X}", n);
	}
}

#include "app.h"
#include <algorithm>
#include<iostream>
#include <format>
namespace vsite::oop::v2
{
	color::color(double red, double blue, double green)
	{
		this->green = green;
		this->red = red;
		this->blue = blue;
	}
	void color::set_red(double broj)
	{
		red = std::clamp(broj, 0.0, 1.0);
	}
	void color::set_green(double broj)
	{
		green = std::clamp(broj, 0.0, 1.0);
	}
	void color::set_blue(double broj)
	{
		blue = std::clamp(broj, 0.0, 1.0);
	}
	double color::get_red() const
	{
			return red;
	}
	double color::get_blue() const 
	{
			return blue;
	}
	double color::get_green() const
	{
			return green;
	}
	double color::get_luminance()
	{
		double y = 0.2126 * red + 0.7152 * green + 0.0722 * blue;
		return y;
	}
	uint32_t color::get_color_ref()
	{
		int r = 255*red;
		int g = 255*green;
		int b = 255*blue;
		if (red == 0)
			r = 0;
		if (green == 0)
			g = 0;
		if (blue == 0)
			b = 0;
		return ((uint32_t)r) | (((uint32_t)g) << 8) | (((uint32_t)b) << 16);
	}
	std::string to_hex(int broj) {
		std::string x = std::format("{:0X}", broj);
		return x;
	}
}
	
// namespace

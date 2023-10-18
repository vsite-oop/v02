#include "app.h"
#include <algorithm>
#include<iostream>
#include <format>
#ifndef RGB
#define RGB(r, g, b) ((uint32_t)(r) | ((uint32_t)(g) << 8)  | ((uint32_t)(b) << 16)) 
#endif RGB
namespace vsite::oop::v2
{
	color::color(double red, double blue, double green)
	{
		this->g = green;
		this->r = red;
		this->b = blue;
	}
	void color::set_red(double broj)
	{
		r = std::clamp(broj, 0.0, 1.0);
	}
	void color::set_green(double broj)
	{
		g = std::clamp(broj, 0.0, 1.0);
	}
	void color::set_blue(double broj)
	{
		b = std::clamp(broj, 0.0, 1.0);
	}
	double color::get_red() const
	{
			return r;
	}
	double color::get_blue() const 
	{
			return b;
	}
	double color::get_green() const
	{
			return g;
	}
	double color::get_luminance() const 
	{
		double y = 0.2126 * r + 0.7152 * g + 0.0722 * b;
		return y;
	}
	uint32_t color::get_color_ref() const
	{
		return RGB(r*255 , g*255 , b*255 );
	}
	std::string to_hex(int broj) {
		std::string x = std::format("{:06X}", broj);
		return x;
	}
}
	
// namespace

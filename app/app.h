#pragma once

#include <cstdint>
#include <algorithm>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
/*
* class declaration
*/
	struct color
	{
	private:
		double red = 0.0;
		double green = 0.0;
		double blue = 0.0;

	public:
		double get_red() const { return red; }
		double get_green() const { return green; }
		double get_blue() const { return blue; }

		void set_red(double red) { this->red = std::clamp(red, 0.0, 1.0); }
		void set_green(double green) { this->green = std::clamp(green, 0.0, 1.0); }
		void set_blue(double blue) { this->blue = std::clamp(blue, 0.0, 1.0); }

		unsigned get_color_ref() const { return RGB(int(red * 255), int(green * 255), int(blue * 255)); }
		double get_luminance() const { return red * 0.2126 + green * 0.7152 + blue * 0.0722; }
	};

}

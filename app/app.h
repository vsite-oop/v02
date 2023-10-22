#pragma once

#include <cstdint>
#include <string>


// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
/*
* class declaration
*/

	class color {
		double red = 0;
		double green = 0;
		double blue = 0;
	public:
		color(double red = 0, double green = 0, double blue = 0);
		double get_red() const;
		double get_green() const;
		double get_blue() const;
		void set_red(double x);
		void set_green(double x);
		void set_blue(double x);

		uint32_t get_color_ref() const;
		double get_luminance() const;

	};

	std::string to_hex(int color);
}

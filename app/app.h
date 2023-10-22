#pragma once
#include <string>
#include <cstdint>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
/*
* class declaration
*/
	class color {
		double r;
		double g;
		double b;
	public:
		color(double r = 0, double g = 0, double b = 0);
		double get_red() const;
		double get_green() const;
		double get_blue() const;
		void set_red(double c);
		void set_green(double c);
		void set_blue(double c);
		uint32_t get_color_ref() const;
		double get_luminance() const;
	};

	std::string to_hex(int num);

}

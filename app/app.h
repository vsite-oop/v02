#pragma once

#include <cstdint>
#include <string>
#include <format>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
	std::string to_hex(int a);

	class color {
		double r = 0;
		double g = 0;
		double b = 0;

	public:
		double get_red() const;
		double get_green() const;
		double get_blue() const;

		void set_red(double a);
		void set_green(double a);
		void set_blue(double a);

		uint32_t get_color_ref() const;

		double get_luminance() const;
	};

	
}

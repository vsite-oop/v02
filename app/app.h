#pragma once

#include <cstdint>
#include<string>
#include<format>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{

	std::string to_hex(int boja);
	class color {
		double red = 0;
		double green = 0;
		double blue = 0;

	public:
		double get_red() const;
		double get_green() const;
		double get_blue() const;

		void set_red(double boja);
		void set_green(double boja);
		void set_blue(double boja);

		unsigned int get_color_ref() const;

		double get_luminance() const;

	};



}
#pragma once

#include <cstdint>
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
		double get_red() const;  // Must be const else returns error! In app.cpp also must be const!
		double get_green() const;
		double get_blue() const;

		void set_red(double n);
		void set_green(double n);
		void set_blue(double n);

		uint32_t get_color_ref() const;  // Professor says there's a macro for this to work written at the top.

		double get_luminance() const;
	};

}

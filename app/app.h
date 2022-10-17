#pragma once

#include <cstdint>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

//funkcija vraca uint32_t

namespace vsite::oop::v2
{
/*
* class declaration
*/

	class color {
	private:
		double red = 0.;
		double green = 0.;
		double blue = 0.;

	public:
		double get_red() const;
		double get_green() const;
		double get_blue() const;

	public:
		void set_red(double r);
		void set_green(double g);
		void set_blue(double b);

		uint32_t get_color_ref() const;
		double get_luminance() const; //luminnace formula rgb
	};


}

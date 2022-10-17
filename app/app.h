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
	private:
		double red = 0;
		double green = 0;
		double blue = 0;
	public:
		//get
		double get_red() const;
		double get_green() const;
		double get_blue() const;

		//set
		void set_red(double value);
		void set_green(double value);
		void set_blue(double value);
	};

}

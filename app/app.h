#pragma once
#include<string>
#include <cstdint>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
	class color {
	private:
		double R;
		double G;
		double B;
	public:
		color(double red=0, double green=0, double blue=0);
		void set_red(double x);
		void set_green(double x);
		void set_blue(double x);

		double get_red() const;
		double get_green() const;
		double get_blue() const;

		unsigned int get_color_ref() const;
		double get_luminance() const;
	};
	std::string to_hex(int n);

}

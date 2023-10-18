#pragma once
#include <cstdint>
#include <string>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))


namespace vsite::oop::v2
{
	class color {
    private:
        double r;
        double g;
        double b;
    public:
        color(double red = 0,double green = 0,double blue = 0);
        void set_red(double broj);
        void set_green(double broj);
        void set_blue(double broj);
        double get_red() const;
        double get_green() const;
        double get_blue() const;
        uint32_t get_color_ref() const;
        double get_luminance() const;
    
    };
    std::string to_hex(int broj);
}

#pragma once

#include <cstdint>
#include <algorithm>
#include <string>
#include <istream>
#include <ostream>
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
        int xr = 0;
        int xg = 0;
        int xb = 0;

    public:
        double get_red() const {
            return red;
        }
        double get_green() const {
            return green;
        }
        double get_blue() const {
            return blue;
        };

        void set_red(std::istream& is) {
            is >> red;
            red = std::clamp(red, 0., 1.);
            xr = red * 255;
        }        
        void set_green(std::istream& is) {
            is >> green;
            green = std::clamp(green, 0., 1.);
            xg = green * 255;
        }        
        void set_blue(std::istream& is) {
            is >> blue;
            blue = std::clamp(blue, 0., 1.);
            xb = blue * 255;
        }

        void set_red(double r) {
            red = std::clamp(r, 0., 1.);
            xr = red * 255;
        }
        void set_green(double g) {
            green = std::clamp(g, 0., 1.);
            xg = green * 255;
        }
        void set_blue(double b) {
            blue = std::clamp(b, 0., 1.);
            xb = blue * 255;
        }

        uint32_t get_color_ref() const;

        double get_luminance();

        std::string to_hex();
    };     
}

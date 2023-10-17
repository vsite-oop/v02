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

    std::string to_hex(int num);

    class color {
        double red = 0;
        double green = 0;
        double blue = 0;

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

        void set_red(double r) {
            red = std::clamp(r, 0., 1.);
        }
        void set_green(double g) {
            green = std::clamp(g, 0., 1.);
        }
        void set_blue(double b) {
            blue = std::clamp(b, 0., 1.);
        }

        uint32_t get_color_ref() const;

        double get_luminance();
    };     
}

#pragma once

#include <cstdint>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
    class color {
        double red = 0, green = 0, blue = 0;

    public:
        double get_red() const;
        double get_green() const;
        double get_blue() const;

        void set_red(double clr);
        void set_green(double clr);
        void set_blue(double clr);

        unsigned get_color_ref() const;
        double get_luminance() const;
};


}

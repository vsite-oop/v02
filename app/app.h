#pragma once

#include <cstdint>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))
#include <string>
#include <format>


namespace vsite::oop::v2
{
    std::string to_hex(int a);
    class color{
        double red=0,green=0,blue=0;
        public:
          double get_red()const;
          double get_green()const;
          double get_blue()const;

          double set_red(double a);
          double set_green(double a);
          double set_blue(double a);

          uint32_t get_color_ref()const;
          double get_luminance()const;

    }
/*
* class declaration
*/


}

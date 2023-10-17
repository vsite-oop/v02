#include "app.h"
#include <algorithm>
#include <format>
#include <ostream>
#include <iostream>
#include <sstream>
#include <iomanip>

namespace vsite::oop::v2
{
/*
* class member function implementations
*/
    std::string to_hex(int num) {
        return std::format("{:X}", num);
    }

    uint32_t color::get_color_ref() const {        
        return RGB(red*255, green*255, blue*255);
    }

    double color::get_luminance() {
        return red * 0.2126 + green * 0.7152 + blue * 0.0722;
    }

} // namespace

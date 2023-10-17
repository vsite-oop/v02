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
    std::string color::to_hex() {
        std::stringstream ss;
        ss << "0x" << std::hex;
        ss << std::setfill('0') << std::setw(2) << xr;
        ss << std::setfill('0') << std::setw(2) << xg;
        ss << std::setfill('0') << std::setw(2) << xb;
        ss << std::endl;
        return ss.str();
    }

    uint32_t color::get_color_ref() const {        
        return RGB(xr, xg, xb);
    }

    double color::get_luminance() {
        return red * 0.2126 + green * 0.7152 + blue * 0.0722;
    }

} // namespace

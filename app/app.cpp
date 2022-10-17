#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
    double color::get_red() const {
        return red;
    };

    double color::get_green() const {
        return green;
    };

    double color::get_blue() const {
        return blue;
    };

    void color::set_red(double clr) {
        red = std::clamp(clr, 0., 1.);
    };

    void color::set_green(double clr) {
        green = std::clamp(clr, 0., 1.);
    };

    void color::set_blue(double clr) {
        blue = std::clamp(clr, 0., 1.);
    };

    unsigned color::get_color_ref() const {
        return RGB(255 * this->red, 255 * this->green, 255 * this->blue);
    };

    double color::get_luminance() const {
        return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
    };

} // namespace
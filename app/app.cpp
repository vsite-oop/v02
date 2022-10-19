#include "app.h"
#include <algorithm>
#include <string>
#include <format>

namespace vsite::oop::v2
{
        std::string to_hex(int a){
           return std::format("{:X}",a);
           }
        
        double color::get_red()const{
            return red;
        }
        double color::get_green()const{
            return green;
        }
        double color::get_blue()const{
            return blue;
        }
        void color::set_red(double a){
           red=std:clamp(a,0.0,1.0);
        }
        void color::set_green(double a){
            green=std:clamp(a,0.0,1.0);
        }
        void color::set_blue(double a){
            blue=std:clamp(a,0.0,1.0);
        }
        uint32_t color::get_color_ref()const{
            return RGB(red*255,green*255,blue*255);
        }
        double color::get_luminance()const{
            return 0.2126*red + 0.7152*green + 0.0722*blue;
        }




    
/*
* class member function implementations
*/


} // namespace

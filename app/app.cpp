#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
	/*
	* class member function implementations
	*/

	//get
	double color::get_red() const {
		return red;
	}
	double color::get_green() const {
		return green;
	}
	double color::get_blue() const {
		return blue;
	}

	//set
	void color::set_red(double value) {
		red = value;
	}
	void color::set_blue(double value) {
		blue = value;
	}
	void color::set_green(double value) {
		green = value;
	}


} // namespace

//clamp funkcija za broj izmedju danih vrijednosti

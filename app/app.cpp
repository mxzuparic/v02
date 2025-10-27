#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{

	double color::clamp(double x) {
		if (x < 0) return 0;
		if (x > 1) return 1;
		return x;
	}

	void color::set_red(double x) { r = clamp(x); }
	void color::set_green(double x) { g = clamp(x); }
	void color::set_blue(double x) { b = clamp(x); }

	double color::get_red() const { return r; }
	double color::get_green() const { return g; }
	double color::get_blue() const { return b; }

	COLORREF color::get_color_ref() const {
		return RGB(
			static_cast<unsigned char>(r * 255),
			static_cast<unsigned char>(g * 255),
			static_cast<unsigned char>(b * 255)
		);
	}

	double color::get_luminance() const {
		return r * 0.2126 + g * 0.7152 + b * 0.0722;
	}

} // namespace

#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{

	void color::set_red(double x) { r = std::clamp(x, 0.0, 1.0); }
	void color::set_green(double x) { g = std::clamp(x, 0.0, 1.0); }
	void color::set_blue(double x) { b = std::clamp(x, 0.0, 1.0); }

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

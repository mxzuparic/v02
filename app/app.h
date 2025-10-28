#pragma once

#include <cstdint>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
	using COLORREF = std::uint32_t;

	class color {
		double r = 0, g = 0, b = 0;
	public:
		color() : r(0), g(0), b(0) {}
		color(const color& other) : r(other.r), g(other.g), b(other.b) {}
		color& operator=(const color&) = default;
		void set_red(double);
		void set_green(double);
		void set_blue(double);
		double get_red() const;
		double get_green() const;
		double get_blue() const;
		COLORREF get_color_ref() const;
		double get_luminance() const;
	};

}

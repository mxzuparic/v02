#include <format>
#include "app.h"
#include <iostream>

using namespace vsite::oop::v2;

std::string to_hex(int n) {
    return std::format("{:06X}", n);
}

int main()
{
    double r, g, b;
    std::cin >> r >> g >> b;

    color c;
    c.set_red(r);
    c.set_green(g);
    c.set_blue(b);

    COLORREF cr = c.get_color_ref();

    std::cout << to_hex(cr) << "\n";
}

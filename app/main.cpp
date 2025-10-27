#include <iostream>
#include <format>
#include "app.h"
#include <sstream>
#include <iomanip>

using namespace vsite::oop::v2;

std::string to_hex(int n) {
    std::ostringstream ss;
    ss << std::uppercase << std::hex << std::setfill('0') << std::setw(2) << n;
    return ss.str();
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

    int R = cr & 0xFF;
    int G = (cr >> 8) & 0xFF;
    int B = (cr >> 16) & 0xFF;

    std::cout << to_hex(R) << to_hex(G) << to_hex(B) << "\n";
}

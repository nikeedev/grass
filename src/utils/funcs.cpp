#include "funcs.h"

double floor(double _num, int amount = 0)
{
    int a = amount;
    std::string num = std::to_string(_num);
    if (0 <= a) {
        return std::stod(num.substr(0, num.find(".") + a + 1));
    }
    else {
        std::string b = "";
        for (int i = 0; i < 0 - a; i++)
        {
            b += "0";
        }
        return std::stod(num.substr(0, num.find(".") + a) + b);
    }
}

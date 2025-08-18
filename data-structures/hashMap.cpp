#include <iostream>
#include "include/hash.h"

int main() {
    HashMap map;
    map.insert(17, "ABC");
    map.insert(23, "DEF");
    map.insert(36, "GHI");
    map.insert(19, "JKL");
    map.insert(37, "KLM");

    map.display();

    std::cout << "Value at 36: " << map.get(36);

    map.deleteval(19);
    map.display();

    return 0;
}

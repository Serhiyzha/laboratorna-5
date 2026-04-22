#include <vector>
#include <iostream>
#include "ryad.h"

void process(const std::vector<ryad*>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        ryad* obj = arr[i];
        std::cout << "Довжина: " << obj->length() << "\n";
        std::cout << "Замінено: " << obj->replace() << "\n\n";
    }
}
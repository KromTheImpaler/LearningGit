#include <iostream>
#include "./new_feature.h"

int main() {
    NewFeature my_new_feature;
    int hello = my_new_feature.add(3, 5);
    std::cout << "Hello, World! " << hello << std::endl;
    return 0;
}
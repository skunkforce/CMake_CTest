#include "MathFunctions.h"
#include <iostream>
#include <cassert>

int main() {
    // Test für die Additionsfunktion
    assert(add(2, 3) == 5);
    std::cout << "Addition test passed!" << std::endl;

    // Test für die Multiplikationsfunktion
    assert(multiply(2, 3) == 6);
    std::cout << "Multiplication test passed!" << std::endl;

    return 0; // Erfolg
}

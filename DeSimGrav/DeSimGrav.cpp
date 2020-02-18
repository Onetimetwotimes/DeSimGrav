#include <iostream>

// Placeholder: Hello World, and Project Euler Problem 1
// A cooperative project between Simeon Widdisand Victor Antonio.Simulates gravitational fields

int main() {
    std::cout << "Hello World!\n";

    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    std::cout << sum << "\n";
}
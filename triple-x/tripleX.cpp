#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Welcome to the Guessing Game, Triple X!" << std::endl;
    std::cout << "You need to enter the right code to continue..." << std::endl;

    const int a{3}, b{6}, c{9};

    const int sum{ a + b + c };
    const int product{ a * b * c};

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
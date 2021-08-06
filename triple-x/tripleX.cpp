#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Welcome to the Guessing Game, Triple X!" << std::endl;
    std::cout << "You need to enter the right code to continue..." << std::endl;

    int a{3}, b{6}, c{9};

    int sum{ a + b + c };
    int product{ a * b * c};

    std::cout << sum << std::endl;
    std::cout << product << std::endl;
    
    return 0;
}
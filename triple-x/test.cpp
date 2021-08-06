#include <iostream>

int getResponse()
{
    int val{0};
    std::cout << "Please enter a value!\n";
    std::cin >> val; 
    return val;
}

int main(int argc, char const *argv[])
{
    std::cout << getResponse();
    return 0;
}

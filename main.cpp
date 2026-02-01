#include <iostream>
#include <string>
int main() {
    std::string input;
    while (true) {
        std::cout<<"Enter age: ";
        std::cin>>input;
        if (input=="exit") {
            break;
        }
        try {
            int age{std::stoi(input)};
            if (age<0) {
                std::cout<<"Negative values are not allowed\n";
            }
            if (age<18) {
                std::cout<<"You're a minor\n";
            }
            else {
                std::cout<<"You're a major\n";
            }
        }
        catch (std::invalid_argument&) {
            std::cout<<"Invalid input\n";
        }
    }
}
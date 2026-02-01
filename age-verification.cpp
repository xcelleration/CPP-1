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
            std::size_t pos; // Stores where the conversion stopped
            int age = std::stoi(input, &pos);
            // If pos isn't the end of the string, there's trailing "garbage"
            if (pos != input.length()) {
                std::cout << "Invalid input (contains non-numeric characters)\n";
            }
            else if (age<0) {
                std::cout<<"Negative values are not allowed\n";
            }
            else if (age<18) {
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
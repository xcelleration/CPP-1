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
                std::cout << "Invalid input\n";
            }
            else if (age<0) {
                std::cout<<"Negative values are not allowed\n";
            }
            else if (age<18) {
                std::cout<<"You must be over 18 to continue\n";
            }
            else {
                int name;
                std::cout<<"Enter first name: \n";
                std::cin>>name;
                std::cout<<"Enter last name: \n";
                    std::cin>>name;
            }
        }
        catch (std::invalid_argument&) {
            std::cout<<"Invalid input\n";
        }
        std::cout<<"This will loop until I fix it\n";
    }
}
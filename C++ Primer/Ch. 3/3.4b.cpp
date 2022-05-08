#include <string>
#include <iostream>

int main(){
        std::string line1;
        std::string line2;
        std::cin >> line1 >> line2;
        if(line1.size() == line2.size()){
                std::cout << "The strings are equal in size." << std::endl;
        } else {
                if(line1.size() < line2.size()){
                        std::cout << "The second string is bigge in size." << std::endl;
                } else {
                        std::cout << "The first string is bigger in size." << std::endl;
                }
        }
        return 0;
}



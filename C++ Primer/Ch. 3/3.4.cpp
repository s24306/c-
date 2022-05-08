#include <string>
#include <iostream>

int main(){
        std::string line1;
	std::string line2;
	std::cin >> line1 >> line2;
        if(line1 == line2){
                std::cout << "The strings are equal." << std::endl;
        } else {
		if(line1 < line2){
			std::cout << "The second string is bigger." << std::endl;
		} else {
			std::cout << "The first string is bigger." << std::endl;
		}
	}
        return 0;
}


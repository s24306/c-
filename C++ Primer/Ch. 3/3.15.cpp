#include <iostream>
#include <vector>
#include <string>

int main(){
        std::vector<std::string> stringVector;
	std::string str;
        while(std::cin >> str){
                stringVector.push_back(str);
        }
        return 0;
}


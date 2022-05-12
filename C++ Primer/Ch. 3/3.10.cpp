#include <iostream>

int main(){
        std::string s = "";
        getline(std::cin, s);
        for(auto &c : s){
		if(ispunct(c)){
			c = (char) 0;
		}
        }
        std::cout << s << std::endl;
        return 0;
}


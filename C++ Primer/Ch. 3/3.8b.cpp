#include <iostream>

int main(){
        std::string s = "";
        std::cin >> s;
        for(int i = 0; i < s.size(); i++){
		s[i] = 'X';
	}
        std::cout << s << std::endl;
        return 0;
}


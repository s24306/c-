#include <iostream>

int main(){
        std::string s = "";
        std::cin >> s;
	int i = 0;
	while(i < s.size()){
		s[i] = 'X';
		i++;
	}
        std::cout << s << std::endl;
        return 0;
}


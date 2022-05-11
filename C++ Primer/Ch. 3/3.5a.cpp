#include <string>
#include <iostream>

int main(){
	std::string str, temp;
	bool run = true;
	while(getline(std::cin, temp) && run){
		if(temp.empty()){
			run = false;
		} else {
			str += temp;
		}
	}
	std::cout << str << std::endl;
	return 0;
}

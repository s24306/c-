#include <iostream>
#include <vector>

int main(){
	std::vector<int> intVector;
	int num;
	while(std::cin >> num){
		intVector.push_back(num);
	}
	return 0;
}	

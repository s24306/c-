#include <iostream>

int main(){
	int num1, num2;
	std::cout << "Please enter two numbers" << std::endl;
	std::cin >> num1 >> num2;
	while(num1 <= num2){
		std::cout << num1 << std::endl;
		num1++;
	}
	return 0;
}

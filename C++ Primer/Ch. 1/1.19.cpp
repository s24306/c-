#include <iostream>

int main(){
	int num1, num2;
	std::cin >> num1 >> num2;
	if(num1 < num2){
		for (num1; num1 <= num2; num1++){
			std::cout << num1 << std::endl;
		}
	} else {
		for (num2; num2 <= num1; num2++){
			std::cout << num2 << std::endl;
		}
	}
	return 0;
}

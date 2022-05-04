#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int num1, num2;
	cout << "Please enter two numbers" << endl;
	cin >> num1 >> num2;
	while(num1 <= num2){
		cout << num1 << endl;
		num1++;
	}
	return 0;
}

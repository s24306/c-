#include <iostream>
using std::cout;
using std::endl;

int main(){
	int sum = 0, num = 50;
	while(num <= 100){
		sum += num;
		num++;
	}
	cout << sum << endl;
	return 0;
}

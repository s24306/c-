#include <vector>

int main() {
	std::vector<int> vector1(10, 42);// Best solution - least writing
	std::vector<int> vector2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	std::vector<int> vector3;
  	for (int i = 0; i < 10; i++){
    		vector3.push_back(42);
	}
  	return 0;
}

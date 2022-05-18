#include <iostream>
#include <vector>

int main(){
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4{10};
	std::vector<int> v5{10, 42};
	std::vector<std::string> v6{10};
	std::vector<std::string> v7{10, "hi"};

	std::cout << v1.size() << std::endl;
	std::cout << "The values of v1 are: ";
	for (auto val: v1){
            std::cout << val << " ";
        }
        std::cout << std::endl;

	std::cout << v2.size() << std::endl;
	std::cout << "The values of v2 are: ";
        for (auto val: v2){
            std::cout << val << " ";
        }
        std::cout << std::endl;

	std::cout << v3.size() << std::endl;
	std::cout << "The values of v3 are: ";	
        for (auto val: v3)
        {
            std::cout << val << " ";
        }
        std::cout << std::endl;

	std::cout << v4.size() << std::endl;
	std::cout << "The values of v4 are: ";
        for (auto val: v4){
            std::cout << val << " ";
        }
        std::cout << std::endl;

	std::cout << v5.size() << std::endl;
	std::cout << "The values of v5 are: ";
        for (auto val: v5){
            std::cout << val << " ";
        }
        std::cout << std::endl;

	std::cout << v6.size() << std::endl;
	std::cout << "The values of v6 are: ";
        for (auto val: v6){
            std::cout << val << " ";
        }
        std::cout << std::endl;

	std::cout << v7.size() << std::endl;
	std::cout << "The values of v7 are: ";
        for (auto val: v7){
            std::cout << val << " ";
        }
        std::cout << std::endl;
	
	return 0;
}

#include <iostream>

int main(){
        std::string s;
        std::cout << s[0] << std::endl; // Since s is uninitialized it should have
       					// some undefined garbage value
        return 0;
}


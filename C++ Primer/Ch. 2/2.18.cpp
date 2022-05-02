#include <iostream>

int main() {
  int num;
  int *numPointer = &num;

  *numPointer = 1;
  std::cout << "The value of a variable is: " << num
	  << " and the pointer is: " << *numPointer << std::endl;
  num = 2;
  std::cout << "The value of a variable is: " << num 
          << " and the pointer is: " << *numPointer << std::endl;

  return 0;
}

#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item currItem;
	while (std::cin >> currItem) {
		Sales_item newTrans;
		while (std::cin >> newTrans) { 
			if (currItem.isbn() == newTrans.isbn()){
				currItem += newTrans;
			} else {
				std::cout << currItem << std::endl;
				currItem = newTrans;
			}
		}
		std::cout << currItem << std::endl;
	}
	return 0;
}

#include <iostream>
#include <string>
#include "Sales_data_with_guard.h"

int main(){
	Sales_data_with_guard book1, book2;
	double price = 0;
	std::cin >> book1.bookNo >> book1.sold >> price;
	book1.revenue = book1.sold * price;
	std::cin >> book2.bookNo >> book2.sold >> price;
        book2.revenue = book2.sold * price;
	std::cout << "book1 + book2 = Units sold: " << book1.sold + book2.sold
	       << " for: " << book1.revenue + book2.revenue << std::endl;
	return 0;
}	

#include <iostream>
#include <string>

struct Sales_data{
        std::string bookNo;
        double revenue = 0;
        unsigned int sold = 0;
};

int main(){
	Sales_data book1, book2;
	double price = 0;
	std::cin >> book1.bookNo >> book1.sold >> price;
	book1.revenue = book1.sold * price;
	std::cin >> book2.bookNo >> book2.sold >> price;
        book2.revenue = book2.sold * price;
	std::cout << "book1 + book2 = Units sold: " << book1.sold + book2.sold
	       << " for: " << book1.revenue + book2.revenue << std::endl;
	return 0;
}	

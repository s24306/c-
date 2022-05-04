#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

struct Sales_data{
        string bookNo;
        double revenue = 0;
        unsigned int sold = 0;
};

int main(){
	Sales_data book1, book2;
	double price = 0;
	cin >> book1.bookNo >> book1.sold >> price;
	book1.revenue = book1.sold * price;
	cin >> book2.bookNo >> book2.sold >> price;
        book2.revenue = book2.sold * price;
	cout << "book1 + book2 = Units sold: " << book1.sold + book2.sold
	       << " for: " << book1.revenue + book2.revenue << endl;
	return 0;
}	

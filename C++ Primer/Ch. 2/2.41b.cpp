#include <iostream>
#include <string>

struct Sales_data{
        std::string bookNo;
        double revenue = 0;
        unsigned int sold = 0;
};

int main(){
	Sales_data book;
	double price = 0;
	double overallRevenue = 0;
	unsigned int overallTransactions = 0;
	while(std::cin >> book.bookNo >> book.sold >> price){
		book.revenue = book.sold * price;
		overallTransactions += book.sold;
		overallRevenue += book.revenue;
	}
	std::cout << "Number of transactions: " << overallTransactions
	       	<< " for a total revenue of: " << overallRevenue << std::endl;
	return 0;
}

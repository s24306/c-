#include <iostream>
#include <string>
#include "Sales_data_with_guard.h"

int main(){
	Sales_data_with_guard book;
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

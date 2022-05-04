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
	Sales_data book;
	double price = 0;
	double overallRevenue = 0;
	unsigned int overallTransactions = 0;
	while(cin >> book.bookNo >> book.sold >> price){
		book.revenue = book.sold * price;
		overallTransactions += book.sold;
		overallRevenue += book.revenue;
	}
	cout << "Number of transactions: " << overallTransactions
	       	<< " for a total revenue of: " << overallRevenue << endl;
	return 0;
}

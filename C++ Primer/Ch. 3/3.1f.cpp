#include <iostream>
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
	Sales_data currData;
	double price = 0;
	while (cin >> currData.bookNo >> currData.sold >> price) {
		currData.revenue = currData.sold * price;
		Sales_data newTrans;
		double newTransPrice = 0;
		while (cin >> newTrans.bookNo >> newTrans.sold >> newTransPrice) {
			newTrans.revenue = newTrans.sold * newTransPrice;
			if (currData.bookNo == newTrans.bookNo){
				currData.sold += newTrans.sold;
				currData.revenue += newTrans.revenue;
			} else {
				cout << "Name: " << currData.bookNo 
					<< ", Units sold: " << currData.sold 
					<< ", Revenue: " << currData.revenue << endl;
				currData = newTrans;
			}
		}
		cout << "Name: " << currData.bookNo 
                                      << ", Units sold: " << currData.sold 
                                      << ", Revenue: " << currData.revenue << endl;

	}
	return 0;
}

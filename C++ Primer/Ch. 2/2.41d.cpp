#include <iostream>
#include "Sales_data.h"

int main(){
	Sales_data currData;
	double price = 0;
	while (std::cin >> currData.bookNo >> currData.sold >> price) {
		currData.revenue = currData.sold * price;
		Sales_data newTrans;
		double newTransPrice = 0;
		while (std::cin >> newTrans.bookNo >> newTrans.sold >> newTransPrice) {
			newTrans.revenue = newTrans.sold * newTransPrice;
			if (currData.bookNo == newTrans.bookNo){
				currData.sold += newTrans.sold;
				currData.revenue += newTrans.revenue;
			} else {
				std::cout << "Name: " << currData.bookNo 
					<< ", Units sold: " << currData.sold 
					<< ", Revenue: " << currData.revenue << std::endl;
				currData = newTrans;
			}
		}
		std::cout << "Name: " << currData.bookNo 
                                      << ", Units sold: " << currData.sold 
                                      << ", Revenue: " << currData.revenue << std::endl;

	}
	return 0;
}

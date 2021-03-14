#include <iostream>
#include <string>
#include <algorithm>
#include "Stock.h"

Stock::Stock(std::string ticker, double price, double eps)
	: ticker{ticker}, price{price}, eps{eps}
{}

void Stock::stock_specs(){
	std::transform(ticker.begin(), ticker.end(), ticker.begin(), ::toupper);
	std::cout << ticker << ": \n";
	std::cout << "\tUpdated on: "  << this->date_created << std::endl;
	std::cout << "\tPrice: " << this->price << std::endl;
	std::cout << "\tEPS: " << this->eps << std::endl;
}

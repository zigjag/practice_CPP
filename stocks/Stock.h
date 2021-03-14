#ifndef STOCK_H
#define STOCK_H

#include <string>
#include <ctime>

class Stock {
	public:
		std::string ticker;
		double price;
		double eps;
		time_t date_created = time(0);

		Stock(std::string ticker, double price, double eps);
		~Stock() = default;

		void stock_specs();
};


#endif

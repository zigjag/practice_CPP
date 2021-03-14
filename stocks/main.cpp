#include <cstdlib>
#include <ctime>
#include "Stock.h"

int main(){
	Stock apple("aapl", 120.00, 2.00);
	apple.stock_specs();

	return 0;
}

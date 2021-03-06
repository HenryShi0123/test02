//stockszc.cpp -- implementing th stock class
//version 00
#include <iostream>
#include "stockszc.h"

Stock::Stock()
{
    company   = "no name";
    shares    = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
	company = co;
	if (n < 0) {
		std::cerr << "Number of shares can`t be negative; " << company << " shares set to 0.\n";
		shares = 0;
	} else {
		shares = n;
	}
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{

}
void Stock::acquire(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0) {
		std::cout << "Number of shares can`t be negative; "
			      << company 
			      << " shares set to 0. \n";
	} else {
		shares = n;
	}
	share_val = pr;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num < 0) {
		std::cout << "Number of shares purchased can`t be negative. "
			      << "Thransaction is aborted\n";
	} else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price) 
{
	using std::cout;
	if (num < 0) {
		cout << "Number of shares sold can`t be negative. "
		     << "Transaction is aborted.\n";
	} else if (num > shares) {
		cout << "You can`t sell more than you have!"
			 << "Transcation is aborted.\n";
	} else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::cout << " Comany: " << company 
              << " Shares: " << shares << '\n'
              << " Share Price: $" << share_val
              << " Total Worth: $" << total_val << '\n'; 
}
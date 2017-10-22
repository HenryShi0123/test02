//stockszc.h -- Stock class interface
//version 00
#ifndef STOCKSZC_H
#define STOCKSZC_H

#include <string>

class Stock {
private:
	std::string company;
	long        shares;
	double		share_val;
	double		total_val;
	void		set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const std::string &co, long sh = 0, double pr = 0.0);
	void acquire(const std::string & co, long n, double pr);
    ~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};

#endif


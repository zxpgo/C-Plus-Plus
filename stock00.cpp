#include <iostream>
#include "stock00.h"

Stock::Stock()
{
	std::cout <<  "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
	
}

Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	company = co;
	if (n < 0)	
	{ 
		std::cerr << "Number of shares can't be nagative; "
			   << company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();

}

Stock::~Stock()
{
	std::cout << "Bye, " << company << " !\n";
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be nagative. "
			  << "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be nagative. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have!"
			<< " Transantion is aborted.\n";
	}
	else
	{
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

void Stock::show() const
{
	std::cout << "Company: " << company
		<< " Shares: " << shares << std::endl
		<< " Share Price: $" << share_val
		<< " Total Worth: $" << total_val << std::endl;
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

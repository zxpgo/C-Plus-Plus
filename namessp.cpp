#include <iostream>
#include  "namesp.h"
void other();
void another();
int main()
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = {{"Benny", "goatsniff"}, 120.0};
	showDebt(golf);
	other();
	another();
	return 0;
}

void other()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using namespace debts;
	Person dg = {"Doobles", "Glister"};
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++)
		getDebt(zippy[i]);
	for (i = 0; i < 3; i++)
		showDebt(zippy[i]);
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
}

void another()
{
	using pers::Person;
	Person collector = {"Milo", "Rightshift"};
	pers::showPerson(collector);
	std::cout << std::endl;
}

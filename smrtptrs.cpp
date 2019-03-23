#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Report
{
private:
	string str;
public:
	Report(const string s) : str(s)
		{ cout << "Object created!\n"; }
	~Report() {cout << "Object deleted!\n"; }
	void comment() const { cout << str << endl; }
};

int main()
{
	{
		auto_ptr<Report> ps (new Report("using auto_ptr"));
		ps->comment();
	}
	{
		shared_ptr<Report> ps (new Report("using share_ptr"));
		ps->comment();
	}
	{
		unique_ptr<Report> ps (new Report("using unique_ptr"));
		ps->comment();
	}
	return 0;
}

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Account {
	//default private
	double balance;

public:
	Account()
	{
		balance = 0.0;
	}

	Account(double balance_)
	{
		balance = balance_;

	}

	void deposit(double amount)
	{
		balance += amount;
	}

	double withddraw(double amount)
	{
		auto temp{ 0.0 };
		if (balance < amount)
		{
			temp = balance;
			balance = 0;
			return temp;
		}
		else
		{
			balance -= amount;
			return (amount);
		}
	}
};

int main()
{
	Account a1;
	Account a2 = Account{ 100.0 };	//by anonymous object init a2 of left.
	a1.deposit(9.0);

	cout << a1.withddraw(10.0) << endl;  //print 9
	cout << a2.withddraw(52.0) << endl;  //print 52

	//this anonymous object,only once to use;
	cout << Account(1000.0).withddraw(1001) << endl;  //print 1000

	cin.get();
	return 0;
}
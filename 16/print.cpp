#include <iostream>
#include <cstdio>

// iostream
using std::cin;
using std::cout;
using std::endl;

// functions go here
void printVertically(unsigned long n);

int main()
{
	cout << "Enter a value for n" << endl;

	int n;
	cin >> n;

	printVertically(n);

	return 0;
}

void printVertically(unsigned long n)
{
	if(n < 10)
	{
		cout << n << endl;
		return;
	}
	printVertically(n/10);
	cout << n%10 << endl;
}

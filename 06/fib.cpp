#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int fib(int n)
{
	double _sqrt = sqrt(5);
	double x = pow((1+_sqrt),n);
	double y = pow((1-_sqrt),n);
	double num = x-y;
	double denom = pow(2,n) * _sqrt;

	return num/denom;
}

int main()
{
	int n; //The nth term for the fibonacci sequence
	int term; //The actual term the user is looking for

	cout << "Enter a value for n" << endl;
	cin >> n;
	cout << "The nth term is " << n << endl;

	term = fib(n);

	cout << "The " << n << "th term is "  << term << endl;

	return 0;
}

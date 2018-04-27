#include <iostream>
using namespace std;

int pow(int x, int n);

int main()
{
	int x;
	int n;
	while(cin >> x >> n)
	{
		cout << pow(x,n) << endl;
	}

	return 0;
}

int pow(int x, int n)
{
	if(n == 0) return 1;

	return (x * pow(x,n-1));
}

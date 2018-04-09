/* TODO: write a loop that prints the sum of the first n odd cubes. */

#include <iostream>
using namespace std;

int main()
{
	cout << "Until what integer n would you like to find the sume of the cubes" << endl;

	int n;
	cin >> n;

	int sum = 0;

	for(int i = 1; i <= n; i++)
	{
		int cube = i*i*i;
		sum += cube;
	}

	cout << sum << endl;

	return 0;
}
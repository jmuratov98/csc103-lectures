//============================================================================
// Name        : product.cpp
// Author      : 
// Version     :
// Professor   : Professor Skeith
// Description : TODO is below
//============================================================================

/* TODO: read a list of integers from stdin and print the *product* of
 * them all.  NOTE: to read integers from stdin, you can use a loop
 * like this: while (cin >> n) {...}.  Then run the program with
 * integers fed to stdin like this: echo 8 2 3 | ./a.out
 * and you should get 8*2*3 = 48
 */

//This is the actual TODO I got bored and I added more to it;
#if 0	 
#include <iostream>
using namespace std;


int main()
{
	int n; //holds the inputed numbers
	int product; //takes the product of n;
	
	while(cin >> n)
	{
		product *= n;
	}
	
	cout << "The product is " << product << endl;
	
	return 0;
}
#endif

#include <iostream>
#include <vector>

using namespace std;

void Product(int& product, int n)
{
	product *= n;
}

int main()
{
	int n;
	int product = 1;
	vector<int> V;

	cout << "Enter any amount of numbers to multiply" << endl;
	while(cin >> n)
	{
		V.push_back(n);
		Product(product, n);
	}

	for(size_t i = 0; i < V.size(); i++)
	{
		cout << V[i] << " ";
		for(int j = 0; j < 1; j++)
		{
			if(i != V.size()-1)
				cout << "* ";
			else
				cout << "= ";
		}
	}

	cout << product << endl;

	return 0;
}

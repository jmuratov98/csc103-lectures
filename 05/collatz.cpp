/* More about loops.
 * See lectures 4,5,6 from Prof. Li.,
 * and chapters 3,4 in the book. */

// the usual stuff:
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* Collatz conjecture: for all integers n, the following process
	 * will terminate in a finite number of steps:
	 *    if n == 1, stop;
	 *    if n is even, divide by 2;
	 *    if n is odd, multiply by 3 and add 1;
	 *    repeat using this new value of n.
	 * */
	/* TODO: write a program that tests the conjecture for arbitrarily
	 * many integers, provided on standard input.  (Just print the input
	 * and the number of steps it required before terminating.) */

int main()
{
	int n;
	cin >> n;

	if(n == 1)
		cout << "0" << endl; 
		return 0;
	
	int i;
	for(i = 0; i != 1; i++)
	{
		if(n%2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
	}
	
	cout << i << endl;
	
	return 0;
}

/* TODO: keep track of the maximal intermediate value and print that out
 * along with the result. */

// vim:foldlevel=1

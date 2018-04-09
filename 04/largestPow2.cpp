/* TODO: a slight generalization of an earlier exercise: for integers
 * n and k, determine the largest power of k that divides n.
 * NOTE: see if you can formalize the invariant you used to solve this.
 * 
 */

#include <iostream>
using namespace std;

int main()
{
	int n, k;
	
	cout << "Enter two numbers n and k respectively" << endl;
	cin >> n >> k;

	int i;
	for(i = 1; n/k != 1; i++)
	{
		n/=k;
	}

	cout << i <<endl;

	return 0;
}
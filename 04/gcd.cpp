/* exercise: brute force gcd.  Compute the greatest common
 * divisor of n and k by an exhaustive search.  */
/* IDEA: start with the largest possible value that the gcd
 * could have, then walk *backwards* until you find the first
 * value that divides both inputs. */
/* Range of possibilities for a valid answer: {min{a,b}...1} */

#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int gcd;

	cout << "Enter two numbers" << endl;
	cin >> n1 >> n2;

	if(n1 > n2){
		gcd = n2;
	} 
	else
	{
		gcd = n1;
	}


	for(gcd; n1 % gcd != 0 ||n2 % gcd != 0; gcd--);

	cout << "The greatest common denominator is " << gcd << endl;

	return 0;
}
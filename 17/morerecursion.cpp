#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>

/* TODO: write the recursive GCD function from lecture and make sure you
 * understand how it works.  In fact, make sure you can *prove* it works.
 * (Keep mind how we defined the size of the input as the size of the
 * second parameter.)
 * */
int gcd(int a, int b)
{
	if(b == 0) return a;
	return gcd(b,a%b);
}

/* TODO: write the *extended* GCD algorithm, which returns gcd(a,b), but
 * also sets u and v such that ua + vb = gcd(a,b) Warning: this might take a
 * little bit of thinking (if you don't just look up the answer online).  Save
 * it for last. */
int xgcd(int a, int b, int& x, int& y)
{
	//base case: d = a;
	if(b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}

	int xx; // x'
	int yy; // y'
	int q = a/b, r = a%b; //q is the quotient, r = is the remainder after division

	//au + bv = gcd(a, b)
	int d = xgcd(b, r, xx, yy);
	//d = bxx + ryy
	//NOTE: a = qb + r
	//GOAL: find x, y such that d = ax + by
	//but a = qb + ar => r = a - qb
	//so, d = bxx + (a-qb)yy
	//	= bxx + ayy - qbyy
	//	= ayy + b(xx-qyy)
	x = yy;
	y = xx - q*yy;

	return d;
}

void gcdTest()
{
	int a,b,d,u,v;
	cout << "Enter pairs of integers a,b for gcd test: ";
	while(cin >> a >> b) {
		d = gcd(a,b);
		printf("gcd(%i,%i) = %i\n",a,b,d);
		cout << "Enter pairs of integers u,v to find the euclidean method: ";
		cin >> u >> v;
		d = xgcd(a,b,u,v);
		printf("%i*%i + %i*%i = %i\n",a,u,b,v,d);
	}
}

int main()
{
	gcdTest();
	return 0;
}

/* TODO: if you haven't already, write merge sort from last time. */

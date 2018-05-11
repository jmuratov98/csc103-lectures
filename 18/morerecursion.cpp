#include <iostream>
#include <cstdio>

// iostream
using std::cin;
using std::cout;
using std::endl;

/* TODO: write the *extended* GCD algorithm, which returns gcd(a,b), but
 * also sets x and y such that ax + by = gcd(a,b).  We did this in lecture,
 * but try to do it here from scratch (don't look at the notes unless you
 * have to). */
int xgcd(int a, int b, int& x, int& y)
{
	if(b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}

	int xx, yy;
	int q = a/b, r = a%b;
	int d = xgcd(b,r,xx,yy);

	x = yy;
	y = xx - q*yy;

	return d;
}

void xgcdTest()
{
	int a,b,d,u,v;
	cout << "Enter 4 values for the Euclidean method to work: ";
	while(cin >> a >> b >> u >> v)
	{
		d = xgcd(a,b,u,v);
		printf("%i*%i + %i*%i = %i\n",a,u,b,v,d);
	}
}

int main(int argc, char** argv)
{
	xgcdTest();
	return 0;
}

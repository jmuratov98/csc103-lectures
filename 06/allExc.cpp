/* TODO: write test code for all the above exercises. */
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

// Find Max
int max(int x, int y, int z)
{
  if(x > y)
  {
    if(x > z)
      return x;
    else
      return z;
  }
  else
  {
    if(y > z)
      return y;
    else
      return z;
  }
}

void findMax()
{
	int x, y, z;
	int maxVal;

	cout << "Enter three numbers" << endl;
	cin >> x >> y >> z;

	maxVal = max(x,y,z);

	cout << "The numbers you inputed were:" << endl
		 << "x = " << x << endl
		 << "y = " << y << endl
		 << "z = " << z << endl
		 << "The max value is " << maxVal << endl;
}

//Find Average
double average(double x, double y, double z)
{
	return ((x + y + z)/3);
}

void findAvg()
{
	double x, y, z;
	double avg;

	cout << "Enter three numbers" << endl;
	cin >> x >> y >> z;

	avg = average(x, y, z);

	cout << "The average of " << endl
		 << " x: " << x << endl
         << " y: " << y << endl
         << " z: " << z << endl
         << " avg: " << avg << endl;
}

//Swap the numbers
int swap(int& x, int& y)
{
	int temp;
	temp = y;
	y = x;
	x = temp;
}

void swapNum()
{
	int x, y;

	cout << "Enter two numbers" << endl;
	cin >> x >> y;

	cout << "Before: " << endl
		 << "x = " << x << endl
         << "y = " << y << endl;

	swap(x,y);

	cout << "After: " << endl
		 << "x = " << x << endl
		 << "y = " << y << endl;

}

//Find Fib
int fib(int n)
{
	double _sqrt = sqrt(5);
	double x = pow((1+_sqrt),n);
	double y = pow((1-_sqrt),n);
	double num = x-y;
	double denom = pow(2,n) * _sqrt;

	return num/denom;
}

void findFib()
{
	int n; //The nth term for the fibonacci sequence
	int term; //The actual term the user is looking for

	cout << "Enter a value for n" << endl;
	cin >> n;
	cout << "The nth term is " << n << endl;

	term = fib(n);

	cout << "The " << n << "th term is "  << term << endl;
}

//find prime
int findPrime(int n, bool& prime)
{
  if(n == 1)
  {
    prime = false;
  }

  else
    {
      for(int i = 2; i <= n/2; i++)
      {
        if(n%i == 0)
        {
          prime = false;
          break;
        }
      }

      return prime;
    }
}

void isPrime(bool& prime)
{
  if(prime)
    cout << prime << endl;
  else
    cout << prime << endl;
}

void Prime()
{
  int n;
  bool prime = true;

  cout << "Enter a number to compute its prime" << endl;
  cin >> n;

  findPrime(n, prime);
  isPrime(prime);
}

int main ()
{
	cout << "Welcome to the the menu" << endl
		 << "What would you like to do" << endl
		 << "1. Find the Max Value" << endl
		 << "2. Find the Average" << endl
		 << "3. Swap the numbers" << endl
		 << "4. Find the nth term of the Fibonnaci sequence" << endl
		 << "5. Finds if the number is a prime" << endl;

		int choice;

		cin >> choice;

		switch(choice)
		{
			default:
				break;
			case 1:
				findMax();
				break;
			case 2:
				findAvg();
				break;
			case 3:
				swapNum();
				break;
			case 4:
				findFib();
				break;
			case 5:
				Prime();
		}

	return 0;
}

//current foldmethod = manua

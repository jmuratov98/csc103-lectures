#include <iostream>
#include <cstdio>
using namespace std;

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

int main()
{
  int n;
  bool prime = true;

  cout << "Enter a number to compute its prime" << endl;
  cin >> n;

  findPrime(n, prime);
  isPrime(prime);

  return 0;
}`

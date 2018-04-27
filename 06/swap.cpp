#include <iostream>
#include <cstdio>
using namespace std;

int swap(int& x, int& y)
{
  int temp;
  temp = y;
  y = x;
  x = temp;
}

int main()
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


  return 0;
}

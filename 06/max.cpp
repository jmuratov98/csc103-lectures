#include <iostream>
#include <cstdio>
using namespace std;

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

int main()
{
  int x, y, z;
  int maxVal;

  cout << "Enter three numbers" << endl;
  cin >> x >> y >> z;

  maxVal = max(x,y,z);

  cout << "The max number of x: " << x << " y: " << y << " z: " << z << " is " << maxVal << endl;

  return 0;
}

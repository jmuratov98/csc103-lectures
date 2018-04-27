#include <iostream>
#include <cstdio>
using namespace std;

double average (double x, double y, double z)
{
  return ((x+y+z)/3);
}

int main()
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

/* TODO: brute force test for perfect cubes.  Check if
 * n = k^3 for some integer k.  */

 #include <iostream>
 using namespace std;

 int main()
 {
 	 int n;

	 cout << "enter a number to check if it is a perfect cube" << endl;
	 cin >> n;

	 bool isCube = false;

	 for(int i = 1; i != n; i++)
	 {
		if(i*i*i == n)
		{
			isCube = true;
			break;
		}
	 }

	 cout << "1 is true" << endl << "0: is false" << endl << isCube << endl;

	 return 0;
 }